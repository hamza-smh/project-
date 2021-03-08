/* Controlling LED using Firebase console*/
#include <ESP8266WiFi.h>                                            
#include <FirebaseArduino.h>                                    

#define FIREBASE_HOST "fir-1-44bff.firebaseio.com"                  
#define FIREBASE_AUTH "5JXYjuOKKUIiFDWuUCQinUkZfOdWki3omcp6hv65"                 
#define WIFI_SSID "Shary124_Ext"                                        
#define WIFI_PASSWORD "3343572002@"                             

String fireStatus = "";                                                   
int led = D3;                                                                
void setup() {
  Serial.begin(9600);
  delay(1000);      
  pinMode(led, OUTPUT);                 
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);                                      
  Serial.print("Connecting to ");
  Serial.print(WIFI_SSID);
  while (WiFi.status() != WL_CONNECTED) {
    Serial.print(".");
    delay(500);
  }
  Serial.println();
  Serial.print("Connected to ");
  Serial.println(WIFI_SSID);
  Serial.print("IP Address is : ");
  Serial.println(WiFi.localIP());                                                     
  Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);                                      
  Firebase.setString("LED_STATUS", "OFF");                                         
}

void loop() {
  fireStatus = Firebase.getString("LED_STATUS");                                     
  if (fireStatus == "ON") {                                                       
    Serial.println("Led Turned ON");                                                                         
    digitalWrite(led, HIGH);                                                       
  } 
  else if (fireStatus == "OFF") {                                                  
    Serial.println("Led Turned OFF");                                            
    digitalWrite(led, LOW);                                                  
  }
  else {
    Serial.println("Wrong Credential! Please send ON/OFF");
  }
}
