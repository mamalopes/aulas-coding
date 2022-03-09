int vermelho = 2;
int verde = 3;
int amarelo = 4;
int branco = 5;
int azul = 6;

void setup()
{
  pinMode(vermelho, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(amarelo, OUTPUT);
  pinMode(branco, OUTPUT);
  pinMode(azul, OUTPUT);
}

void loop()
{
  digitalWrite(vermelho, HIGH);
  delay(2000); 
  
  digitalWrite(verde, HIGH);
  delay(2000); 
  
  digitalWrite(amarelo, HIGH);
  delay(2000); 
  
  digitalWrite(branco, HIGH);
  delay(2000); 
  
  digitalWrite(azul, HIGH);
  delay(2000); 
  
  
  digitalWrite(vermelho, LOW);
  digitalWrite(verde, LOW); 
  digitalWrite(amarelo, LOW);
  digitalWrite(branco, LOW);
  digitalWrite(azul, LOW);
  
  delay(2000);
