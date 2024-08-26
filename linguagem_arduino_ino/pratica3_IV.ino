#define ch1 2 // chaves para controlar leds
#define ch2 3
#define led1 5 // leds a serem controlados
#define led2 6
#define led3 7
#define led4 8

int val1=0, val2=0; //variaveis a serem testadas

void setup() {
  // put your setup code here, to run once:
  pinMode(ch1,INPUT);
  pinMode(ch2,INPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  Serial.begin(9600);
  Serial.println("Selecione as chaves:");
  Serial.println("ch1=0,ch2=0-led1,ch1=0,ch2=1-led2,ch1=1,ch2=0-led3,ch1=1,ch2=1-led4");
  
}

void loop() {
  // put your main code here, to run repeatedly:
  val1 = digitalRead(ch1); // le entradas
  val2 = digitalRead(ch2);

  if (!val1 && !val2){
    digitalWrite(led1,HIGH); // acende led1
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
  }
  else if (!val1 && val2){
    digitalWrite(led1,LOW);
    digitalWrite(led2,HIGH); // acende led2
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
  }
  else if (val1 && !val2){
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,HIGH); // acende led3
    digitalWrite(led4,LOW);
  }
  else {
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,HIGH); // acende led4
  }

  delay(1000); // pausa o loop por 1 seg 
}
