#include <ESP8266WiFi.h>
#include <PubSubClient.h>
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

#define IR_PIN D4              
int ir_read;
String message;

void setup() {
  Serial.begin(115200);
  setupWiFi();
  connectMQTTServer();
  pinMode(IR_PIN, INPUT);
}

void loop() {
    long now = millis();
    if (now - lastPublishTime > INTERVAL) {
    lastPublishTime = now;
    ir_read = digitalRead(IR_PIN);
    if(ir_read == 0){
      message = "Object Detected";
    } else{
      message = " NO Object";
    }
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

String createJsonString() {
  String data = "{";
    data+= "\"d\": {";
      data+="\"Object \":";
     // data += message;
      data+=String(ir_read);
      //data+=",";
    data+="}";
  data+="}";
  return data;
}
