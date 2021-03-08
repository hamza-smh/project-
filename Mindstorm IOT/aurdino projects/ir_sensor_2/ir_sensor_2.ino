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
  if(ir== HIGH)
  {
    Serial.println("Nothing Found");
  }
  else if(ir==LOW)
  {
    Serial.println("Object Found");
  }
}
