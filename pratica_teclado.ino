/*******************************************************************************
* Teclado Matricial 16 Teclas : Primeiros Passos (v1.0)
*
* Baseado no Copyright 2020 RoboCore.
* Escrito por Matheus Cassioli (30/07/2019).
* Atualizado por Clayton J A Silva (30/03/2023).
*
*******************************************************************************/

#include <Keypad.h> // Biblioteca do codigo
#include <LiquidCrystal.h>

// inicializa a biblioteca
// com os números dos pinos do arduíno
const int rs = 10, en = 8, d4 = 2, d5 = 3, d6 = 4, d7 = 5;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);




const byte LINHAS = 4; // Linhas do teclado
const byte COLUNAS = 4; // Colunas do teclado

const char TECLAS_MATRIZ[LINHAS][COLUNAS] = { // Matriz de caracteres (mapeamento do teclado)
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

const byte PINOS_LINHAS[LINHAS] = {22, 24, 26, 28}; // Pinos de conexao com as linhas do teclado
const byte PINOS_COLUNAS[COLUNAS] = {30, 32, 34, 36}; // Pinos de conexao com as colunas do teclado

Keypad teclado_personalizado = Keypad(makeKeymap(TECLAS_MATRIZ), PINOS_LINHAS, PINOS_COLUNAS, LINHAS, COLUNAS); // Inicia teclado

int funcao1(void) {
  return 1;
}

int funcao2(void) {
  return 2;
}

int funcao3(void) {
  return 3;
}

int funcao4(void) {
  return 4;
}

int funcao5(void) {
  return 5;
}

int funcao6(void) {
  return 6;
}

int funcao7(void) {
  return 7;
}

int funcao8(void) {
  return 8;
}

int funcao9(void) {
  return 9;
}

int funcaoA(void) {
  return 10;
}

int funcaoB(void) {
  return 11;
}

int funcaoC(void) {
  return 12;
}

int funcaoD(void) {
  return 13;
}

int funcaoX(void) {
  return 0;
}


void setup() {
   // configura o número de colunas e linhas do lcd:
  lcd.begin(16, 2);
  lcd.print("Uso do lcd1602");  
  Serial.begin(9600); // Inicia porta serial
}

void loop() {
  char leitura_teclas = teclado_personalizado.getKey(); // Atribui a variavel a leitura do teclado
  lcd.setCursor(0, 1);

  
  if (leitura_teclas) { // Se alguma tecla foi pressionada
    Serial.println(leitura_teclas); // Imprime a tecla pressionada na porta serial
    switch (leitura_teclas) {
      case '1':
        Serial.println("tecla 1");
        lcd.clear();
        lcd.print("tecla 1");
        break;
      case '2':
        Serial.println("tecla 2");
        lcd.clear();
        lcd.print("tecla 2");
        break;
      case '3':
        Serial.println("tecla 3");
        lcd.clear();
        lcd.print("tecla 3");
        break;
      case '4':
        Serial.println("tecla 4");
        lcd.clear();
        lcd.print("tecla 4");        
        break;
      case '5':
        Serial.println("tecla 5");
        lcd.clear();
        lcd.print("tecla 5");
        break;
      case '6':
        Serial.println("tecla 6");
        lcd.clear();
        lcd.print("tecla 6");
        break;
      case '7':
        Serial.println("tecla 7");
        lcd.clear();
        lcd.print("tecla 7");
        break;
      case '8':
        Serial.println("tecla 8");
        lcd.clear();
        lcd.print("tecla 8");
        break;
      case '9':
        Serial.println("tecla 9");
        lcd.clear();
        lcd.print("tecla 9");
        break;
      case 'A':
        Serial.println("tecla A");
        lcd.clear();
        lcd.print("tecla A");
        break;
      case 'B':
        Serial.println("tecla B");
        lcd.clear();
        lcd.print("tecla B");
        break;
      case 'C':
        Serial.println("tecla C");
        lcd.clear();
        lcd.print("tecla C");
        break;
      case 'D':
        Serial.println("tecla D");
        lcd.clear();
        lcd.print("tecla D");
        break;
      default:
        Serial.println("tecla X");
        lcd.clear();
        lcd.print("teclas * ou #");
    }
  }

//  if (Serial.available()) {
//           n1 = Serial.read();
//           Serial.println(n1,DEC);
//        }
  
}
