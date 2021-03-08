const int trigPin = D5;
const int echoPin = D6;
long duration;
int distance;

void setup() {
pinMode(trigPin,OUTPUT);
pinMode(echoPin,INPUT);
pinMode(D3,OUTPUT);
Serial.begin(9600);
}

void loop() {
  
  digitalWrite(trigPin,LOW);
  delayMicroseconds(200000);

  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);

  duration = pulseIn(echoPin,HIGH);
  distance = duration*0.034/2;
  Serial.print("Distance : ");
  Serial.println(distance);
  //delay(2000);
  if(distance<=20)
  {
    Serial.println(" Object is nearby");
    digitalWrite(D3,HIGH);
  }
  else 
  {
  Serial.println(" Object is far away");
  digitalWrite(D3,LOW);
  }

}



  
