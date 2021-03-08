#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "lSG8T2Kt2BrjFf2kAR2y7otMmTyhbgAI";
char ssid[] = "Abrar";
char pass[] = "123456789";

//#define LED D1
#define IR D2
#define relay D3
#define Trig D4
#define Echo D5
WidgetLCD LCD(V2);
WidgetLED LED(V1);

void setup() {
  
  LCD.clear();
  LCD.print(0,0,"Distance in cm");  

  Blynk.begin(auth,ssid,pass);
  Serial.begin(9600);

  //pinMode(LED,OUTPUT);
  pinMode(IR,INPUT);
  pinMode(relay,OUTPUT);
  pinMode(Echo,INPUT);
  pinMode(Trig,OUTPUT);
 }
/*  BLYNK_WRITE(V1)
{
  digitalRead(IR);
  int v= param.asInt();
  if(v==1)
  {
    digitalWrite(LED,HIGH);
    digitalWrite(relay,HIGH);   
    
  }
  else
  {
    digitalWrite(LED,LOW);
    digitalWrite(relay,LOW);   
  }
}*/

void loop()
{
  long duration;
  int distance;
  digitalRead(IR);
  if(IR==1)
  {
   LED.on();
   digitalWrite(relay,HIGH);   
    
  }
  else
  {
    LED.off();
    digitalWrite(relay,LOW);   
  }

  digitalWrite(Trig,LOW);
  delayMicroseconds(2);

  digitalWrite(Trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(Trig,LOW);

  duration = pulseIn(Echo,HIGH);
  distance = duration*0.034/2;
  Serial.print("Distance : ");
  Serial.println(distance);
  
  Serial.print("Distance : ");
  Serial.println(distance);
  LCD.print(7,1,distance);
  Blynk.run();
}
