#include <LiquidCrystal.h>
#include <math.h>
#define PALAVRA 6

// Inicializa a biblioteca do LCD 1602
// com os números dos pinos do arduíno
const int rs = 10, en = 8, d4 = 2, d5 = 3, d6 = 4, d7 = 5; // Parametros de pinagem
LiquidCrystal lcd(rs, en, d4, d5, d6, d7); //Instancia o objeto lcd

// Declara a constante que define o modo de representação de números negativos
const int MODO=0; // modo 0 indica bit sinal, modo 1 indica complemento de 1 e modo 2 indica complemento de 2

// Declara as variáveis globais de entrada e de saida
String entrada;
String saida;


String adicao(String dado){ // Produz o resultado da primeira operação básica E5E4E3 + E2E1E0
  int num1,num2;
  String resultado;
  num1 = (dado[0] - 48) * 4 + (dado[1] - 48) * 2 + (dado[2] - 48); // E5E4E3
  num2 = (dado[3] - 48) * 4 + (dado[4] - 48) * 2 + (dado[5] - 48); // E2E1E0
  resultado = converteDecimalString(num1 + num2);

  return resultado; 
}


String converteDecimalString(int dado){ // Converte Decimal para E5E4E3E2E1E0 em String
  String resultado = "";
  int j=pow(2,PALAVRA-1);
  for (int i=0;i<PALAVRA;i++){
    if (dado<j){
      resultado = resultado + "0";
    }
    else {
      resultado = resultado + "1";
      dado = dado - j;
    }
    j = j/2;  
  }
  
  return resultado;
}


void geraSaida(String dado){  // Produz a saída para a segunda linha do LCD 1602
  lcd.setCursor(0, 1); // Seta cursor para a posição coluna 0, linha 1
  lcd.print(dado);
}


String complemento1(String dado){ // Produz o complemento de 1 de E5E4E3E2E1E0
  String resultado = "";
  for (int i=0;i<PALAVRA;i++){
    if (dado[i] == '1') resultado = resultado + "0"; 
    else resultado = resultado + "1";
  }
  
  return resultado;
}


String complemento2(String dado){ // Produz o complemento de 2 de E5E4E3E2E1E0
  String resultado;
  int decimal;
  resultado = complemento1(dado);
  decimal = converteStringDecimal(resultado) + 1;
  resultado = converteDecimalString(decimal);
  
  return resultado;
}


int converteStringDecimal(String dado){ // Converte E5E4E3E2E1E0 em String para Decimal
  int decimal = 0;
  int pot = 1;
  for (int i=0;i<PALAVRA;i++){
    decimal += (dado[PALAVRA - 1 - i] - 48) * pot;
    pot = pot * 2;
  }
  
  return decimal;
}


String subtracao(String dado){ // Produz o resultado da operação básica E5E4E3 - E2E1E0
                               // Gera o resultado de acordo com o modo desejado
  int num1,num2;
  String resultado;
  num1 = (dado[0] - 48) * 4 + (dado[1] - 48) * 2 + (dado[2] - 48); // E5E4E3
  num2 = (dado[3] - 48) * 4 + (dado[4] - 48) * 2 + (dado[5] - 48); // E2E1E0
  if (num1 > num2) 
    resultado = converteDecimalString(num1 - num2);
  else {
    resultado = converteDecimalString(num2 - num1);
    switch (MODO) {
    case 0:
      resultado[0]='1';
      break;
    case 1:
      resultado = complemento1(resultado);
      break;
    case 2:
      resultado = complemento2(resultado);
      break;  
    }
  }
  
  return resultado;
}

int selecaoOp(String dado){ // Seleciona a opção com base na String E5E4E3E2E1E0
  if (dado[0] == '0' && dado[1] == '0') // Operação 1
    saida = complemento1(entrada);
  else if (dado[0] == '0' && dado[1] == '1') // Operação 2
    saida = complemento2(entrada);
  else if (dado[0] == '1' && dado[1] == '0') // Operação 3
    saida = adicao(entrada);
  else 
    saida = subtracao(entrada);  // Operação 4
}

void setup() {
  lcd.begin(16, 2); // Inicializa o lcd
  lcd.print("Trab 1: pratica"); // e disponibiliza a mensagem na linha 1
  Serial.begin(9600); // Inicializa o monitor serial
}

void loop() {
  Serial.println("Entre os dados:");
  while (Serial.available() == 0) {}     //Aguarda por dados disponíveis
  entrada = Serial.readString();  // Leitura do dado no monitor
  selecaoOp(entrada);
  Serial.println(saida);
  geraSaida(saida);
  
}
