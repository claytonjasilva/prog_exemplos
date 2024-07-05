/*
Prática 8 - Dispositivos de saída
Circuito utilizando a placa do Arduíno 2560 e saídas digitais para conexão com um display 16 caracteres x 2 linhas (LCD 1602)
O LCD 1602 possui algumas características interessantes - Ver especificações técnicas.
Prof Clayton J A Silva
Disciplina Arquitetura de Computadores
*/

#include <LiquidCrystal.h>

// inicializa a biblioteca
// com os números dos pinos do arduíno
const int rs = 10, en = 8, d4 = 2, d5 = 3, d6 = 4, d7 = 5;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // configura o número de colunas e linhas do lcd:
  lcd.begin(16, 2);
  lcd.print("Uso do lcd1602");  
  
}

void loop() {
// set o cursor para a coluna 0, linha 1
  lcd.setCursor(0, 1);
  
// escreve o número de segundos após o reset
  lcd.print(millis() / 1000);
}
