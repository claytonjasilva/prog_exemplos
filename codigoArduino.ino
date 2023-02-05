// Define nomes para os pinos usados como saída e entrada
#define LED1 2
#define LED2 3
#define LED3 4

#define chave1 6
#define chave2 7
int val1 = 0; // Inicializa a variável que recebe o sinal de entrada
int val2 = 0;

void setup() {
  // Inicializa os parâmetros do Arduíno:
  // Configura os pinos como saída e entrada do Arduíno
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
  pinMode(chave1,INPUT);
  pinMode(chave2,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  val1 = digitalRead(chave1); 
  val2 = digitalRead(chave2);
  if (val1&&val2){//Acende somente o LED2
    digitalWrite(LED2,LOW);
    digitalWrite(LED3,LOW);
    digitalWrite(LED2,HIGH); 
  }
  else if (val1){//Acende somente o LED1
          digitalWrite(LED2,LOW);
          digitalWrite(LED3,LOW);
          digitalWrite(LED1,HIGH);
          }
        else if (val2){//Acende somente o LED3
                digitalWrite(LED1,LOW);
                digitalWrite(LED2,LOW);
                digitalWrite(LED3,HIGH);
        }
              else {//Apaga todos os LEDs
                digitalWrite(LED1,LOW);
                digitalWrite(LED2,LOW);
                digitalWrite(LED3,LOW);
              }
}
