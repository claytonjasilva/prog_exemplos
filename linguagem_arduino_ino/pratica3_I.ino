/*
Prática 3 - Conhecendo o Arduíno 2560
Circuito utilizando a placa do Arduíno 2560 para acender um LED conectado a uma saída do Arduíno, 
comandado por uma chave ligada a uma entrada do Arduíno.
Prof. Clayton J A Silva
Disciplina Arquitetura de Computadores
*/

// Define nomes para os pinos usados como saída e entrada
#define LED5 2
#define chave1 7
int val = 0; // Inicializa a variável que recebe o sinal de entrada

void setup() {
  // Inicializa os parâmetros do Arduíno:
  // Configura os pinos como saída e entrada do Arduíno
  pinMode(LED5,OUTPUT);
  pinMode(chave1,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  val = digitalRead(chave1); 
  digitalWrite(LED5,val); //Acende o LED5
}
