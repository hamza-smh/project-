#include <ArduinoJson.h>

/* Controlling Sonar using Firebase console*/
#include <ESP8266WiFi.h>                                            
#include <FirebaseArduino.h>                                    

#define FIREBASE_HOST "fir-sonar.firebaseio.com"                  
#define FIREBASE_AUTH "lVUlMXnp1ggLhx1lNapwki4hSdAV324dLaQU0S0j"                 
#define WIFI_SSID "Shary124_Ext"                                        
#define WIFI_PASSWORD "3343572002@"                             

String fireStatus = "";
int echo = D4;
int trig = D3;
void setup() {
   Serial.begin(9600);
      
  pinMode(echo, INPUT);                 
  pinMode(trig, OUTPUT);
   WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  Serial.print("connecting");
  while (WiFi.status() != WL_CONNECTED) {
    Serial.print(".");
    delay(500);
  }
  Serial.println();
  Serial.print("connected: ");
  Serial.println(WiFi.localIP());
  
  Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);
}
void loop() {
digitalWrite(trig,LOW);
  delayMicroseconds(200000);

  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);

  float duration = pulseIn(echo,HIGH);
  float distance = duration*0.034/2;
  Serial.print("Distance : ");
  Serial.println(distance);
   Firebase.setFloat("Distance", distance);
    Serial.println(distance);
  delay(50);

  
}
