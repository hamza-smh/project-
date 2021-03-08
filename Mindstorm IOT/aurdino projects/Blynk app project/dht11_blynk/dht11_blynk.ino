#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

//change code for this
char anth[] ="7FC2xfKHaCvxO9jRJ_EwI1tAN_hOjigM";
char ssid[] = "Shary124_Ext";
char pass[] = "3343572002@";

#include "DHT.h"
#define DHTPIN D4
#define DHTTYPE DHT11

DHT dht(DHTPIN,DHTTYPE);

BlynkTimer timer;
void sendsensor()
{
  float t = dht.readTemperature();
  float h = dht.readHumidity();
  Serial.println("Temperature");
  Serial.println(t);
  Serial.println("Humidity");
  Serial.println(h);

  if(isnan(h)|| isnan(t))
  {
    Serial.println("DHT failed");
    return;
  }
  Blynk.virtualWrite(V1,t);
  Blynk.virtualWrite(V2,h);  
}
void setup() {
 Serial.begin(9600);
 Blynk.begin(anth,ssid,pass);
 dht.begin();
 timer.setInterval(1000L,sendsensor);
}
void loop() {
 Blynk.run();
 timer.run();
}
