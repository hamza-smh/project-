#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char anth[] ="7FC2xfKHaCvxO9jRJ_EwI1tAN_hOjigM";
char ssid[] = "Shary124_Ext";
char pass[] = "3343572002@";


void setup() {
  Serial.begin(9600);
  Blynk.begin(anth,ssid,pass);
}

void loop() {
 Blynk.run();
}
