/*
Prática 4 - Conhecendo o Arduíno 2560
Seção III
O sketch deve ler a palavra código de entrada. O sistema deverá apresentar uma contagem binária crescente cíclico no monitor serial 
a partir do código lido até 111. O contador cíclico se repete. 
Por exemplo, se for lido 011, o sistema deverá gerar 011-100-101-110-111-011-100-101...
Prof. Clayton J A Silva
Disciplina Arquitetura de Computadores
*/

#define I0 2
#define I1 3
#define I2 4

int b0, b1, b2;

int converteDecimal(int i, int j, int k){ // converte o binario kji para decimal
  return i+2*j+4*k;
}

void escreveBinario(int num){ // gera a sequencia de num ate 7
  while (num <= 7) {
          for (int j = 2; j >= 0; j--){ // le num bit a bit (tres bits menos significativos, b2,b1,b0) e escreve no monitor serial
            Serial.print(bitRead(num,j));
          }
          num++;
          delay(1000);
          Serial.println(" - ");
  }
}

void setup() {
  // put your setup code here, to run once:
  pinMode(I0,INPUT);
  pinMode(I1,INPUT);
  pinMode(I2,INPUT);
  Serial.begin(9600);
  b0 = digitalRead(I0);
  b1 = digitalRead(I1);
  b2 = digitalRead(I2);
}

void loop() {
  // put your main code here, to run repeatedly:
  int numero = converteDecimal(b0,b1,b2);
  while (converteDecimal(b0,b1,b2) == numero) {
    escreveBinario(numero);
    b0 = digitalRead(I0);
    b1 = digitalRead(I1);
    b2 = digitalRead(I2);
  }
  Serial.print("Nova sequencia - decimal: ");
  Serial.println(converteDecimal(b0,b1,b2));
  delay(1000);
}