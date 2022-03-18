const int botao = 3;
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

const int pot = 0;
int var1 = 0;
int var2;
  
void setup()
{
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
  Serial.begin(9600);
}


void loop()
{

  var2 = digitalRead(botao);
  if(var2){
  var1 = analogRead(pot);
  Serial.println(var2);
  }
  
  if(var1 > 90){
    digitalWrite(led1,HIGH);
  }else{
    digitalWrite(led1,LOW); 
  }
  
    if(var1 > 180){
    digitalWrite(led2,HIGH);
  }else{
     digitalWrite(led2,LOW);
   }
  
    if(var1 > 270){
    digitalWrite(led3,HIGH);
  }else{
     digitalWrite(led3,LOW);
   }
    
    if(var1> 360){
    digitalWrite(led4,HIGH);
  }else{
     digitalWrite(led4,LOW);
   }
  
    if(var1 > 450){
    digitalWrite(led5,HIGH);
  }else{
     digitalWrite(led5,LOW);
   }
  
    if(var1 > 560){
    digitalWrite(led6,HIGH);
  }else{
     digitalWrite(led6,LOW);
   }
  
    if(var1 > 630){
    digitalWrite(led7,HIGH);
  }else{
     digitalWrite(led7,LOW);
   }
  
    if(var1 > 720){
    digitalWrite(led8,HIGH);
  }else{
     digitalWrite(led8,LOW);
   }
  
    if(var1 > 810){
    digitalWrite(led9,HIGH);
  }else{
     digitalWrite(led9,LOW);
   }
  
    if(var1 > 900){
    digitalWrite(led10,HIGH);
  }else{
     digitalWrite(led10,LOW);
   }
  
 }
