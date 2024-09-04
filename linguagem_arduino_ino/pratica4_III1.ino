/*
Prática 4 - Conhecendo o Arduíno 2560
Seção III
O sketch deve ler a palavra código de entrada. Caso a palavra corresponda a um número par: 
o sistema deverá ler via monitor serial um número inteiro; calcular a soma dos números pares não negativos inferiores ao número lido; 
e escrever o resultado no monitor serial.Prof. Clayton J A Silva
Disciplina Arquitetura de Computadores
*/

#define I0 2
#define I1 3
#define I2 4

int converteDecimal(int i, int j, int k){
  return i+2*j+4*k;
}

int somaPares(int i){
  int cont=0, soma=0;
  while (cont < i){ // soma os pares inferiores a i
      soma += cont;
      cont +=2;
  }
  return soma; // par: retorna a soma dos números inferiores a i
}

void setup() {
  // put your setup code here, to run once:
  pinMode(I0,INPUT);
  pinMode(I1,INPUT);
  pinMode(I2,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int b0, b1, b2;
  int numero,decimal;
  b0 = digitalRead(I0);
  b1 = digitalRead(I1);
  b2 = digitalRead(I2);
  decimal = converteDecimal(b0,b1,b2);
  Serial.print("Decimal equivalente: ");
  Serial.println(decimal);
  
  if (decimal % 2 == 0){ // trata-se de decimal par
    
    Serial.println("Decimal equivalente eh par. Digite um numero inteiro na serial");
    while (Serial.available() == 0){
      // Aguarda a entrada do usuário
    }
 
    // Lê o número inserido
    numero = Serial.parseInt();

    // Limpa o buffer serial para evitar caracteres residuais
    while (Serial.available() > 0) {
      Serial.read();
    }
    Serial.print("A soma dos numeros inferiores e ");
    Serial.println(somaPares(numero));
  }
  else Serial.println("Decimal equivalente e numero impar.");
  delay(2000);
  
}