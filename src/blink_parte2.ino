// C++ code
//
void setup()
{
  pinMode(06, OUTPUT);
}

void loop()
{
  digitalWrite(06, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(06, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}