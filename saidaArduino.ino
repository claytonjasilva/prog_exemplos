/*
Prática 2 - Conhecendo o Arduíno 2560
Circuito utilizando a placa do Arduíno 2560 para acender um de três LEDs conectados a três pinos de saída do Arduíno.
Prof. Clayton J A Silva
Disciplina Arquitetura de Computadores
*/

// Define nomes para os pinos usados como saída
#define LED1 2
#define LED2 3
#define LED3 4


void setup() {
  // Inicializa os parâmetros do Arduíno:
  // Configura os pinos como saída do Arduíno
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED1,HIGH); //Acende o LED1
  delay(1000); //Atraso de 1000 mseg para executar próxima instrução
  digitalWrite(LED1,LOW); //Apaga o LED1
  digitalWrite(LED2,HIGH); // Repetição das instruções anteriores
  delay(1000);
  digitalWrite(LED2,LOW);
  digitalWrite(LED3,HIGH);
  delay(1000);
  digitalWrite(LED3,LOW);
}
