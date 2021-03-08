#include <ThingSpeak.h>
#include <DHT.h>
#include <ESP8266WiFi.h>

const char *apiKey = "5NLGGX2NUMG6IQ4Y";
const char *ssid =  "Shary124_Ext";     // replace with your wifi ssid and wpa2 key
const char *pass =  "3343572002@";
int channel = 1013088;

#define DHTPIN D3          //pin where the dht11 is connected
 
DHT dht(DHTPIN, DHT11);
WiFiClient client;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
       delay(10);
       dht.begin();
 
       Serial.println("Connecting to ");
       Serial.println(ssid);
 
       ThingSpeak.begin(client);
       WiFi.begin(ssid, pass);
 
      while (WiFi.status() != WL_CONNECTED) 
     {
            delay(500);
            Serial.print(".");
     }
      Serial.println("");
      Serial.println("WiFi connected");
 
}

void loop() {
  // put your main code here, to run repeatedly:
      float h = dht.readHumidity();
      float t = dht.readTemperature();
      Serial.println(t); 
      Serial.println(h);
      /*String postStr = apiKey;
      postStr += String(t);
      postStr += String(h);*/
      if (isnan(h) || isnan(t))
                 {
                     Serial.println("Failed to read from DHT sensor!");
                      return;
                 }
        ThingSpeak.setField(1, t);
        ThingSpeak.setField(2, h);       
        ThingSpeak.writeFields(channel,apiKey);
delay(15000);
}
