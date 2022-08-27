// =======================================================================================
// Autor: Prof Clayton J A Silva
// Data: 29ago2022
// O programa gera saídas específicas de acordo com uma entrada da pela porta serial
// =======================================================================================

// Declaração e inicialização de variáveis globais de saída Out4,Out3,Out2,Out1,Out0
int Out0=8, Out1=9, Out2=10, Out3=11, Out4=12;


void setup() {
  pinMode(Out0,OUTPUT);
  pinMode(Out1,OUTPUT);
  pinMode(Out2,OUTPUT);
  pinMode(Out3,OUTPUT);
  pinMode(Out4,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  char entrada = Serial.read();
  switch (entrada){
    case 'a':
      digitalWrite(Out0,HIGH);
      digitalWrite(Out1,LOW);
      digitalWrite(Out2,LOW);
      digitalWrite(Out3,LOW);
      digitalWrite(Out4,LOW);
      Serial.println("LED ACESO");
      break;
     case 'b':
      digitalWrite(Out0,LOW);
      digitalWrite(Out1,HIGH);
      digitalWrite(Out2,LOW);
      digitalWrite(Out3,LOW);
      digitalWrite(Out4,LOW);
      Serial.println("LED ACESO");
      break;
     case 'c':
      digitalWrite(Out0,LOW);
      digitalWrite(Out1,LOW);
      digitalWrite(Out2,HIGH);
      digitalWrite(Out3,LOW);
      digitalWrite(Out4,LOW);
      Serial.println("LED ACESO");
      break;
     case 'd':
      digitalWrite(Out0,LOW);
      digitalWrite(Out1,LOW);
      digitalWrite(Out2,LOW);
      digitalWrite(Out3,HIGH);
      digitalWrite(Out4,HIGH);
      Serial.println("LED ACESO");
      break;
     default:
      Serial.println("ENTRADA INVALIDA");
  }

     delay(2000); // delay de 3 segundos antes do próximo loop
}
