#include <ThingSpeak.h>
#include <ESP8266WiFi.h>
const char *apiKey = "R8Z2DK7HWOAKOZX0";
const char *ssid =  "2nd floor";     // replace with your wifi ssid and wpa2 key
const char *pass =  "smessa38";
int channel = 1021297;

//defining all LEDs
#define LED1 D1 
#define LED2 D2
#define LED3 D3

//defining all IRs
#define IR1 D4
#define IR2 D5
#define IR3 D6

//defining LDR
#define LDR D7
bool ir1,ir2,ir3,ldr;

WiFiClient client;

void setup() {

Serial.begin(9600);
       delay(10);

Serial.println("Connecting to ");
       Serial.println(ssid);
 
       ThingSpeak.begin(client);
       WiFi.begin(ssid, pass);
 
      while (WiFi.status() != WL_CONNECTED) 
     {
            delay(500);
            Serial.print(".");
     }
      Serial.println("");
      Serial.println("WiFi connected");
        
  
 pinMode(LED1,OUTPUT);
 pinMode(LED2,OUTPUT);
 pinMode(LED3,OUTPUT);
 
 pinMode(IR1,INPUT);
 pinMode(IR2,INPUT);
 pinMode(IR3,INPUT);

 pinMode(LDR,INPUT);
}

void loop() {

ldr=digitalRead(LDR);
ir1=digitalRead(IR1);
ir2=digitalRead(IR2);
ir3=digitalRead(IR3);

if(ldr==1)
  {
   if(ir1==0)
       {
         Serial.println("Object Present");
         digitalWrite(LED1,HIGH);
       }
     else
       {
         Serial.println("Empty");
         digitalWrite(LED1,LOW);
       } 

    if(ir2==0)
       {
         Serial.println("Object Present");
         digitalWrite(LED2,HIGH);
       }
     else
       {
         Serial.println("Empty");
         digitalWrite(LED2,LOW);
       } 

     if(ir3==0)
       {
         Serial.println("Object Present");
         digitalWrite(LED3,HIGH);
       }
     else
       {
         Serial.println("Empty");
         digitalWrite(LED3,LOW);
       } 
  }
else
  {
    Serial.print("It is Day Time");
  }
  ThingSpeak.setField(1,ir1);
  ThingSpeak.setField(2,ir2); 
  ThingSpeak.setField(3,ir3);
              
  ThingSpeak.writeFields(channel,apiKey);
  
  delay(15000);
}
