#define IR D3
//bool IR;

void setup()
{
  pinMode(IR,INPUT);
  Serial.begin(9600);
}
void loop()
{
  IR=digitalRead(D3);
  if(IR==1);
  {
    Serial.println("Object Is Present");
  }
  else if(IR==0)
  {
    Serial.printli("Empty");
  }
}
