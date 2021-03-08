#define led D0
#define PIR D1
int PIRVALUE;

void setup() {
  pinMode(led,OUTPUT);
  pinMode(PIR,INPUT);
  digitalWrite(led,LOW);
  Serial.begin(9600);
}
void loop() {
  PIRVALUE=digitalRead(PIR);
  digitalWrite(led,PIRVALUE);
  Serial.println(PIRVALUE);
} 
