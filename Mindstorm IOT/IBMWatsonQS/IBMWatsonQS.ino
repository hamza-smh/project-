#include <ESP8266WiFi.h>
#include <PubSubClient.h>
#include <DHT.h>
#define INTERVAL 1000

#define SSID "Shary124_Ext"
#define PASSWORD "3343572002@"

//Server MQTT
#define MQTT_SERVER "quickstart.messaging.internetofthings.ibmcloud.com"
#define TOPIC_NAME "iot-2/evt/status/fmt/json"
const String QUICK_START = "d:quickstart:arduino:";
const String DEVICE_ID = "AB12CD34EF56";

const String CLIENT_ID =  QUICK_START + DEVICE_ID;
WiFiClient wifiClient;
PubSubClient client(MQTT_SERVER, 1883, wifiClient);

long lastPublishTime = 0;

#define DHTPIN D4                // what digital pin we're connected to
#define DHTTYPE DHT11              // select dht type as DHT 11 or DHT22
DHT dht(DHTPIN, DHTTYPE);
float temperature = 0;
float humidity = 0;

void setup() {
  Serial.begin(115200);
  dht.begin();
  setupWiFi();
  connectMQTTServer();
}

void loop() {
  long now = millis();
    if (now - lastPublishTime > INTERVAL) {
    lastPublishTime = now;
    readSensor();
    Serial.print("Publish message: ");
    String msg = createJsonString();
    Serial.println(msg);
    client.publish(TOPIC_NAME, msg.c_str());
  }
}
void setupWiFi() {
  Serial.println();
  Serial.print("Connecting to ");
  Serial.print(SSID);
  WiFi.begin(SSID, PASSWORD);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.println("WiFi connected");
}
void connectMQTTServer() {
  Serial.println("Connecting to MQTT Server...");
  if (client.connect(CLIENT_ID.c_str())) {
    Serial.println("connected");
  } else {
    Serial.print("error = ");
    Serial.println(client.state());
  }
}
void readSensor(){
  float value;
  value = dht.readTemperature();
  if(!isnan(value)){
    temperature = value;
  }
  value = dht.readHumidity();
  if(!isnan(value)){
    humidity = value;
  }
}
String createJsonString() {
  String data = "{";
    data+= "\"d\": {";
      data+="\"temperature\":";
      data+=String(temperature);
      data+=",";
      data+="\"humidity\":";
      data+=String(humidity);
    data+="}";
  data+="}";
  return data;
}
