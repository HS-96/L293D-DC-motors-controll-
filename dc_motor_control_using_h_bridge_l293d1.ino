// C++ code
//
int unnamed = 0;

void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(8, HIGH);
  digitalWrite(7, LOW);
  delay(3000); // Wait for 3000 millisecond(s)
  digitalWrite(13, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(8, LOW);
  digitalWrite(7, HIGH);
  delay(3000); // Wait for 3000 millisecond(s)
}