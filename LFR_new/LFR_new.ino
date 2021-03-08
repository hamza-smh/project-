#define L_S A0      // left sensor
#define M_S A1     // right sensor
#define R_S A4     //middle sensor
#define L_M_F 6       // left motor fwd
#define L_M_R 5       // left motor rvrs
#define R_M_F 2       // right motor fwd
#define R_M_R 3      // right motor rvrs
void setup() {
  pinMode(L_S, INPUT);
  pinMode(R_S, INPUT);
  pinMode(M_S, INPUT);
  pinMode(L_M_F, OUTPUT);
  pinMode(L_M_R, OUTPUT);
  pinMode(R_M_F, OUTPUT);
  pinMode(R_M_R, OUTPUT);

}

void loop() {
  
  if(digitalRead(L_S) && digitalRead(R_S)&& digitalRead(M_S))     // Move Forward
  {
    digitalWrite(L_M_F,HIGH);
    digitalWrite(L_M_R,LOW);
    digitalWrite(R_M_F,HIGH);
    digitalWrite(R_M_R,LOW);
  }
  if(!digitalRead(L_S) && !digitalRead(R_S)&& digitalRead(M_S))     // Move Forward
  {
    digitalWrite(L_M_F,HIGH);
    digitalWrite(L_M_R,LOW);
    digitalWrite(R_M_F,HIGH);
    digitalWrite(R_M_R,LOW);
  }
  
  if(!(digitalRead(L_S)) && digitalRead(R_S)&& digitalRead(M_S))     // Turn right
  {
    digitalWrite(L_M_F,HIGH);
    digitalWrite(L_M_R,LOW);
    digitalWrite(R_M_F,LOW);
    digitalWrite(R_M_R,LOW);
  }
  if(!(digitalRead(L_S)) && digitalRead(R_S)&& !digitalRead(M_S))     // Turn extreme right
  {
    digitalWrite(L_M_F,HIGH);
    digitalWrite(L_M_R,LOW);
    digitalWrite(R_M_F,LOW);
    digitalWrite(R_M_R,HIGH);
  }
  
  if(digitalRead(L_S) && !(digitalRead(R_S)&& digitalRead(M_S)))     // Turn left
  {
    digitalWrite(L_M_F,LOW);
    digitalWrite(L_M_R,LOW);
    digitalWrite(R_M_F,HIGH);
    digitalWrite(R_M_R,LOW);
  }
  if(digitalRead(L_S) && !(digitalRead(R_S))&& !(digitalRead(M_S)))     // Turn extreme left
  {
    digitalWrite(L_M_F,LOW);
    digitalWrite(L_M_R,HIGH);
    digitalWrite(R_M_F,HIGH);
    digitalWrite(R_M_R,LOW);
  }
  
  if(!(digitalRead(L_S)) && !(digitalRead(R_S))&& !(digitalRead(M_S)))     // Stop
  {
    digitalWrite(L_M_F,LOW);
    digitalWrite(L_M_R,LOW);
    digitalWrite(R_M_F,LOW);
    digitalWrite(R_M_R,LOW);
  }

}
