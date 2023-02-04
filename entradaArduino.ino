// Define nomes para os pinos usados como saída e entrada
#define LED1 2
#define chave1 7
int val = 0; // Inicializa a variável que recebe o sinal de entrada

void setup() {
  // Inicializa os parâmetros do Arduíno:
  // Configura os pinos como saída e entrada do Arduíno
  pinMode(LED1,OUTPUT);
  pinMode(chave1,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  val = digitalRead(chave1); 
  digitalWrite(LED1,val); //Acende o LED1
}
