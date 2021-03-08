#include "DHT.h"
#define DHTPIN D4
#define DHTTYPE DHT11

DHT dht(DHTPIN,DHTTYPE);

void setup() {
Serial.begin(9600);
Serial.println("DHT11 test");
dht.begin();
}

void loop() {
  delay(2000);
  float h = dht.read Humidity();
  float t = dht.read temperature();

  if(isnan(h)|| isnan(t))
  {
    Serial.println("DHT failed");
    return;
  }
else
{
  Serial.println("Humidity :");
  Serial.println(h)
  Serial.println("Temperature :" t);
Serial.println(t);
  }



}
