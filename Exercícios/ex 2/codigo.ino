int amarelo = 2;
int azul = 3;

void setup ()
{
  pinMode(amarelo, OUTPUT);
  pinMode(azul, OUTPUT);
}

void loop()
{
  digitalWrite(amarelo, HIGH);
  delay(2000); 
  digitalWrite(amarelo, LOW);

  
  digitalWrite(azul, HIGH);
  delay(2000);
  digitalWrite(azul, LOW);
 
}
