/*******************************************************************************
* Teclado Matricial 16 Teclas : Primeiros Passos (v1.0)
*
* Baseado no Copyright 2020 RoboCore.
* Escrito por Matheus Cassioli (30/07/2019).
* Atualizado por Clayton J A Silva (30/03/2023).
*
*******************************************************************************/

#include <Keypad.h> // Biblioteca do codigo

const byte LINHAS = 4; // Linhas do teclado
const byte COLUNAS = 4; // Colunas do teclado
const byte LED1 = 13; // LEDs para teste
const byte LED2 = 12; 
const byte LED3 = 7;

const char TECLAS_MATRIZ[LINHAS][COLUNAS] = { // Matriz de caracteres (mapeamento do teclado)
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

const byte PINOS_LINHAS[LINHAS] = {6, 5, 4, 3}; // Pinos de conexao com as linhas do teclado
const byte PINOS_COLUNAS[COLUNAS] = {8, 9, 10, 11}; // Pinos de conexao com as colunas do teclado

Keypad teclado_personalizado = Keypad(makeKeymap(TECLAS_MATRIZ), PINOS_LINHAS, PINOS_COLUNAS, LINHAS, COLUNAS); // Inicia teclado

int n1;

int funcao1(void) {
  return 30;
}

int funcao2(void) {
  return 2*30;
}

int funcao3(void) {
  return 3*30;
}

int funcao4(void) { // Pisca LED 1 durante cerca de 10 segundos 
  for (int j=0;j<50;j++){
    digitalWrite(LED1,HIGH);
    delay(200);
    digitalWrite(LED1,LOW);
    delay(200);
  }
  return 1;
}

int funcao5(void) { // Pisca LED 2 durante cerca de 6 segundos 
  for (int j=0;j<30;j++){
    digitalWrite(LED2,HIGH);
    delay(200);
    digitalWrite(LED2,LOW);
    delay(200);
  }
  return 1;
}

int funcao6(void) { // Pisca LED 3 durante cerca de 4 segundos 
  for (int j=0;j<20;j++){
    digitalWrite(LED3,HIGH);
    delay(200);
    digitalWrite(LED3,LOW);
    delay(200);
  }
  return 1;
}

int funcao7(int n1, int n2) { // Pisca LED 3 durante cerca de 4 segundos 
  return n1 + n2;
}

int funcaoqq(void){
  return 0;
}

void setup() {
  Serial.begin(9600); // Inicia porta serial
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
}

void loop() {
  char leitura_teclas = teclado_personalizado.getKey(); // Atribui a variavel a leitura do teclado
  int n2 = 0; // Variáveis para a função 7

  if (leitura_teclas) { // Se alguma tecla foi pressionada
    Serial.println(leitura_teclas); // Imprime a tecla pressionada na porta serial
    switch (leitura_teclas) {
      case '1':
        Serial.println(funcao1());
        break;
      case '2':
        Serial.println(funcao2());
        break;
      case '3':
        Serial.println(funcao3());
        break;
      case '4':
        Serial.println("Pisca LED1");
        funcao4();
        break;
      case '5':
        Serial.println("Pisca LED2");
        funcao5();
        break;
      case '6':
        Serial.println("Pisca LED3");
        funcao6();
        break;
      case '7':
        Serial.println("Le dois numeros inteiros e apresenta a soma");
        if (Serial.available()) {
           n1 = Serial.read();
        }
        break;
      default:
        Serial.println(funcaoqq());
    }
  }

  //if (n1 != 0) Serial.println(funcao7(n1,n2), DEC);
  if (Serial.available()) {
           n1 = Serial.read();
           Serial.println(n1,DEC);
        }
  
}
