/*
Prática 7 - Dispositivos de saída
Circuito utilizando a placa do Arduíno 2560 e três saídas digitais (pinos 2, 3 e 4).
Cada saída conecta-se a um buzzer - Ver especificações técnicas.
O buzzer é um sinalizador piezoelétrico que produz um sinal contínuo, sendo útil para aplicações em instrumentos eletrônicos, controle etc.
Prof. Clayton J A Silva
Disciplina Arquitetura de Computadores
*/


#define S0 2 // define a macro relativa a saida (pino) 5 - em cada pino um LED
#define S1 3
#define S2 4

void setup() {
  // put your setup code here, to run once:
   pinMode(S0,OUTPUT); // Configura os pinos S0, S1 e S2 como saida
   pinMode(S1,OUTPUT);
   pinMode(S2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  tone(S0, 50, 100); // Gera um tom de 50 Hz, no pino S0, com duração de 100 milissegundos
  delay(2000); // Atraso de 2000 milissegundos
  tone(S1, 1000, 300); // Gera um tom de 1 kHz, no pino S1, com duração de 300 milissegundos
  delay(2000); // Atraso de 2000 milissegundos
  tone(S2, 2000, 500); // Gera um tom de 2 kHz, no pino S2, com duração de 500 milissegundos
  delay(2000); // Atraso de 2000 milissegundos
}
