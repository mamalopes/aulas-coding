// C++ code
//

const int botao = 2; 
const int led = 4; 

int var1;

void setup()
{
  pinMode(botao, INPUT);
  pinMode(led, OUTPUT);
  //Serial.begin(9600);
}

void loop()
{
  var1 = digitalRead(botao);
  
  if(var1){
    digitalWrite(led,HIGH);
  }else{
    digitalWrite(led,LOW);
  } 
  delay(10);
}
   
