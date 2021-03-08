#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] ="gmBBh3rDSg_nwE8XX86JToTt0LaasYg_";
char ssid[] = "2nd floor";
char pass[] = "smessa38";

#define LED D5
#define LED1 D6
void setup() {

Blynk.begin(auth,ssid,pass);
Serial.begin(9600);
pinMode(LED,OUTPUT);
}
BLYNK_WRITE(V1)
{
  int v= param.asInt();
  if(v==1)
  {
    digitalWrite(LED,HIGH);
    digitalWrite(LED1,HIGH);
    
  }
  else
  {
    digitalWrite(LED,LOW);
  digitalWrite(LED1,LOW);
  }
}
void loop() {
Blynk.run();
}]
