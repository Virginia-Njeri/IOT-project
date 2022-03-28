// C++ code
int red=1;
//
void setup()
{
  pinMode(1, OUTPUT);
}

void loop()
{
  digitalWrite(red, HIGH);
  delay(1000); // Wait for 5000 millisecond(s)
  digitalWrite(red, LOW);
  delay(1000); // Wait for 5000 millisecond(s)
}
