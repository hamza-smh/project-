#define IR D7
bool ir;
void setup()
{
  pinMode(IR,INPUT_PULLUP);
  Serial.begin(9600);
}
void loop()
{
  ir=digitalRead(IR);
  if(ir==0)
  {
    Serial.println("Object Is Present");
  }
  else if(ir==1)
  {
    Serial.println("Empty");
  }
}
