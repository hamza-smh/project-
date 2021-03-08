#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char anth[] ="0fxF4BAebXR8s4jS_QQ5IswLAN_w-qnU";
char ssid[] = "Shary124_Ext";
char pass[] = "3343572002@";

#define ledPin D7
bool ir;
WidgetLED led1(V1);
void setup() {
  Serial.begin(9600);
  pinMode(ledPin,INPUT);
  Blynk.begin(anth,ssid,pass);
  
}

void loop() {
  ir=digitalRead(ledPin);
  if(ir==1)
   {
    Serial.println("Object Present");
    led1.on();
   }
   else
   {
    Serial.println("Empty");
    led1.off();
   }
   Blynk.run();
}
   
