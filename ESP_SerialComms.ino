#define LED 2
String msg = "0";

void setup() 
{
  pinMode(LED, OUTPUT);
  Serial.begin(115200);
}

void loop() 
{
  if(Serial.available() > 0)
  {
    msg = Serial.readString();
  }

  if(msg == "0") digitalWrite(LED, HIGH);
  else digitalWrite(LED, LOW);
}
