const int botao1 = 1;
const int botao2 = 2;
const int botao3 = 3;
const int led1 = 4;
const int led2 = 5;
const int led3 = 6;
const int led4 = 7;
const int led5 = 8;
const int led6 = 9;
const int led7 = 10;
const int led8 = 11;
const int led9 = 12;
const int led10 = 13;

void setup()
{
  pinMode(botao1, INPUT);
  pinMode(botao2, INPUT);
  pinMode(botao3, INPUT);

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  pinMode(led9, OUTPUT);
  pinMode(led10, OUTPUT);
}

int valor1;
int valor2;
int valor3;

void loop()
{
 valor1 = digitalRead(botao1);
 valor2 = digitalRead(botao2);
 valor3 = digitalRead(botao3);
  
 if(valor1){
  acendeTudo();
 }else{
   apagarTudo();
 } 
  
 if(valor2){
  piscarb();
 }else{
   apagarTudo();
 }  
   
 if(valor3){
  intercalado();
 }else{
   apagarTudo();
 } 
}
void acendeTudo(){
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, HIGH);
  digitalWrite(led6, HIGH);
  digitalWrite(led7, HIGH);
  digitalWrite(led8, HIGH);
  digitalWrite(led9, HIGH);
  digitalWrite(led10, HIGH);
}
   
void apagarTudo(){
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
  digitalWrite(led9, LOW);
  digitalWrite(led10, LOW);
}

  
  void piscarb()
  {
   
    digitalWrite(led1, HIGH);
    delay(200);
    digitalWrite(led2, HIGH);
    delay(200);
    digitalWrite(led3, HIGH);
    delay(200);
    digitalWrite(led4, HIGH);
    delay(200);
    digitalWrite(led5, HIGH);
    delay(200);
    digitalWrite(led6, HIGH);
    delay(200);
    digitalWrite(led7, HIGH);
    delay(200);
    digitalWrite(led8, HIGH);
    delay(200);
    digitalWrite(led9, HIGH);
    delay(200);
    digitalWrite(led10, HIGH);
    delay(10);
    
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
    digitalWrite(led6, LOW);
    digitalWrite(led7, LOW);
    digitalWrite(led8, LOW);
    digitalWrite(led9, LOW);
    digitalWrite(led10, LOW);
  }
    
 void intercalado()
 {
    digitalWrite(led1, HIGH);
    delay(200);
    digitalWrite(led3, HIGH);
    delay(200);
    digitalWrite(led5, HIGH);
    delay(200);
    digitalWrite(led7, HIGH);
    delay(200);
    digitalWrite(led9, HIGH);
    delay(1000);
   
    digitalWrite(led2, HIGH);
    delay(200);
    digitalWrite(led4, HIGH);
    delay(200);
    digitalWrite(led6, HIGH);
    delay(200);
    digitalWrite(led8, HIGH);
    delay(200);
    digitalWrite(led10, HIGH);
    delay(200);
 }
   
