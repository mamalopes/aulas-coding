int led = 3;

void setup ()
{
  pinMode(led, OUTPUT);
}

void loop()
{
  digitalWrite(led, HIGH);
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(led, LOW);
  delay(500); // Wait for 500 millisecond(s)
}
