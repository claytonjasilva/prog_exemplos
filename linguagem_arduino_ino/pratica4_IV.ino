/*
Prática 4 Conhecendo o Arduíno

O projeto Arduíno deverá possibilitar que cada código de entrada ative as seguintes saídas:

000 - ative um led vermelho;
001 - ative um led amarelo;
010 - ative um buzzer com frequência de 100 Hz durante 2 seg, intermitente, em intervalos de 5 seg;
011 - ative um buzzer com frequência de 50 Hz durante 3 seg, intermitente, em intervalos de 2 seg, e ative um led verde;
nos demais casos, produza no monitor serial o número decimal equivalente.
Arquitetura de Computadores
Prof Clayton J A Silva
*/

#define I0 6
#define I1 7
#define I2 8
#define lR 2
#define lY 3
#define buz1 4
#define lGb2 5

int converteDecimal(int i, int j, int k){ // converte o binario kji para decimal
  return i+2*j+4*k;
}

void ledVermelho(){ //000 - ative um led vermelho;
  digitalWrite(lR,HIGH);
  digitalWrite(lGb2,LOW);
  digitalWrite(lY,LOW);
}

void ledAmarelo(){ //001 - ative um led vermelho;
  digitalWrite(lR,LOW);
  digitalWrite(lGb2,LOW);
  digitalWrite(lY,HIGH);
}

void buzzer1(){  //010 - ative um buzzer com frequência de 100 Hz durante 2 seg, intermitente, 
              // em intervalos de 5 seg;
  digitalWrite(lR,LOW);
  digitalWrite(lGb2,LOW);
  digitalWrite(lY,LOW);
  tone(buz1,100,2000);
  delay(3000);
}

void buzzer2(){  //011 - ative um buzzer com frequência de 50 Hz durante 3 seg, 
                 // intermitente, em intervalos de 2 seg, e ative um led verde;
  digitalWrite(lR,LOW);
  digitalWrite(lGb2,HIGH);
  digitalWrite(lY,LOW);
  tone(lGb2,50,3000);
  delay(2000);
}


void setup() {
  // put your setup code here, to run once:
  pinMode(I0,INPUT);
  pinMode(I1,INPUT);
  pinMode(I2,INPUT);
  pinMode(lR,OUTPUT);
  pinMode(lGb2,OUTPUT);
  pinMode(lY,OUTPUT);
  pinMode(buz1,OUTPUT);
  Serial.begin(9600);  
}

void loop() {
  // put your main code here, to run repeatedly:
  int b0, b1, b2;
  int decimal;
  b0 = digitalRead(I0);
  b1 = digitalRead(I1);
  b2 = digitalRead(I2);
  decimal = converteDecimal(b0,b1,b2);
  switch (decimal){
    case 0:
      ledVermelho();
      break;
    case 1:
      ledAmarelo();
      break;
    case 2:
      buzzer1();
      break;
    case 3:
      buzzer2();
      break;
    default:
      digitalWrite(lR,LOW);
      digitalWrite(lGb2,LOW);
      digitalWrite(lY,LOW);
      Serial.println(decimal);
    }
  
 delay(2000);
 
}