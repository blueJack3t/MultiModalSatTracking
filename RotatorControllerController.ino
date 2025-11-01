#define UP_Sig 15
#define DOWN_Sig 2
#define LEFT_Sig 4
#define RIGHT_Sig 5

void setDirection(uint8_t dir)
{
  digitalWrite(UP_Sig, LOW);
  digitalWrite(DOWN_Sig, LOW);
  digitalWrite(LEFT_Sig, LOW);
  digitalWrite(RIGHT_Sig, LOW);
  digitalWrite(dir, HIGH);
}

void setup() 
{
  pinMode(UP_Sig, OUTPUT);
  pinMode(DOWN_Sig, OUTPUT);
  pinMode(LEFT_Sig, OUTPUT);
  pinMode(RIGHT_Sig, OUTPUT);
}

void loop() 
{
  setDirection(UP_Sig);
  delay(500);
  setDirection(DOWN_Sig);
  delay(500);
  setDirection(LEFT_Sig);
  delay(500);
  setDirection(RIGHT_Sig);
  delay(500);
}
