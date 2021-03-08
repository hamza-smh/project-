#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] ="gmBBh3rDSg_nwE8XX86JToTt0LaasYg_";
char ssid[] = "Shary124_Ext";
char pass[] = "3343572002@";
#define Relay1Pin D4
#define Relay2Pin D5

void setup() {
  pinMode(Relay1Pin, OUTPUT);
  pinMode(Relay2Pin, OUTPUT);
  Blynk.begin(auth,ssid,pass);
  Serial.begin(9600);
}
BLYNK_WRITE(V1)
{
  int v= param.asInt();
  if(v==1)
  {
    digitalWrite(Relay1Pin,HIGH);   
   // digitalWrite(Relay2Pin,LOW);   
  6 
  }
  else
  {
    //digitalWrite(Relay2Pin,HIGH);
    digitalWrite(Relay1Pin,LOW);   
  
  }
}
 

 void loop() {
  Blynk.run();
  }
