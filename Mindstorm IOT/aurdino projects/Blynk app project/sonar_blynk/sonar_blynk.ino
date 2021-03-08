#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] ="Xlb8OEBn-qKY6HzlJv9BjzCJkafBKSZZ";
char ssid[] = "Shary124_Ext";
char pass[] = "3343572002@";

#define TrigPin D5
#define EchoPin D6
WidgetLCD LCD(V1);


void setup() {
  Serial.begin(9600);
  Blynk.begin(auth,ssid,pass);
  pinMode(TrigPin,OUTPUT);
  pinMode(EchoPin,INPUT);
  LCD.clear();
  LCD.print(0,0,"Distance in cm");  
}

void loop() {
  long duration,distance;
   digitalWrite(TrigPin,LOW);
  delayMicroseconds(200000);

  digitalWrite(TrigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(TrigPin,LOW);

  duration = pulseIn(EchoPin,HIGH);
  distance = duration*0.034/2;
  LCD.print(7,1,distance);
  Serial.print("Distance : ");
  Serial.println(distance);
  Blynk.run();
 
}
