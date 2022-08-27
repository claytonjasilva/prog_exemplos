// =======================================================================================
// Autor: Prof Clayton J A Silva
// Data: 29ago2022
// O programa gera saídas específicas de acordo com uma combinação binária de entrada de 2 bits
// =======================================================================================

// Declaração e inicialização de variáveis globais de entrada In1,In0
int In0=0, In1=1;
// Declaração e inicialização de variáveis globais de saída Out4,Out3,Out2,Out1,Out0
int Out0=8, Out1=9, Out2=10, Out3=11, Out4=12;


void setup() {
  // Configurando pinos de entrada e saída
  pinMode(In0,INPUT);
  pinMode(In1,INPUT);
  pinMode(Out0,OUTPUT);
  pinMode(Out1,OUTPUT);
  pinMode(Out2,OUTPUT);
  pinMode(Out3,OUTPUT);
  pinMode(Out4,OUTPUT);
}

void loop() {
  int i0,i1; // Declaração de variáveis locais
  i0=digitalRead(In0);
  i1=digitalRead(In1);
  if ((i1==0)&&(i0==0)){ // entrada 00b aciona saída 0
    digitalWrite(Out0,HIGH);
    digitalWrite(Out1,LOW);
    digitalWrite(Out2,LOW);
    digitalWrite(Out3,LOW);
    digitalWrite(Out4,LOW);
  }
  else
    if ((i1==0)&&(i0==1)){ // entrada 01b aciona saída 1
      digitalWrite(Out0,LOW);
      digitalWrite(Out1,HIGH);
      digitalWrite(Out2,LOW);
      digitalWrite(Out3,LOW);
      digitalWrite(Out4,LOW);
     }
    else
      if ((i1==1)&&(i0==0)){ // entrada 10b aciona saída 2
        digitalWrite(Out0,LOW);
        digitalWrite(Out1,LOW);
        digitalWrite(Out2,HIGH);
        digitalWrite(Out3,LOW);
        digitalWrite(Out4,LOW);
     }
      else
        if ((i1==1)&&(i0==1)){ // entrada 11b aciona saídas 3 e 4
          digitalWrite(Out0,LOW);
          digitalWrite(Out1,LOW);
          digitalWrite(Out2,LOW);
          digitalWrite(Out3,HIGH);
          digitalWrite(Out4,HIGH);
     }

     delay(3000); // delay de 3 segundos antes do próximo loop
}
