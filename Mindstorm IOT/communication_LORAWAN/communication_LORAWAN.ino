#include<SoftwareSerial.h>
SoftwareSerial myserial(D7,D8);//tx,rx
#include "DHT.h"
#define DHTTYPE DHT11  
#define DHTPIN D4
DHT dht (DHTPIN,DHTTYPE);

void setup() {
Serial.begin(9600);
while(!Serial){}
myserial.begin(9600);
dht.begin();
}

void loop() {
  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();
  Serial.print("Humidity = ");
  Serial.println(humidity);
  Serial.print("Temperature = ");
  Serial.println(temperature);

  myserial.println("Humidity");
  myserial.println(humidity);
  myserial.println("Temperature =");
  myserial.println(temperature);
 delay(2000);
  
}
