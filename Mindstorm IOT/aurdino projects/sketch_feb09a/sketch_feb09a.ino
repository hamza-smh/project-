#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char anth[] ="S7wIg2H3oI1x8CB9rCmoEebSjGwtR1Ij";
char ssid[] = "STUDENT";
char pass[] = "duet@123";

#define led D1
#define IR D8
bool ir;
WidgetLED led1(V1);

void setup() {
 Serial.begin(9600);
 pinMode(IR,INPUT);
 pinMode(led,OUTPUT);
  Blynk.begin(anth,ssid,pass);
}

void loop() {
   ir=digitalRead(IR);
  if(ir==0)
   {
    Serial.println("Object Present");
    led1.on();
    digitalWrite(led,HIGH);
   }
   else
   {
    Serial.println("Empty");
    led1.off();
    digitalWrite(led,LOW);;
    }
 Blynk.run();
}
