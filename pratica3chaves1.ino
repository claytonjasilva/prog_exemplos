/*
Prática 5 - Conhecendo o Arduíno 2560
Circuito utilizando a placa do Arduíno 2560 utilizando três chaves.
As chaves indicam entradas binárias: 000, 0001, 010, ..., 111. A saída de cada chave conecta em uma entrada do Arduíno (2, 3, 4).
Conforme a palavra do código de entrada, o programa realiza uma função específica.
Prof. Clayton J A Silva
Disciplina Arquitetura de Computadores
*/


#define I0 2 // define a macro relativa a entrada (pino) 2 - em cada pino um LED
#define I1 3
#define I2 4

int soma(int num) {
   int termo = 1, S = 0; //Declara e inicializa as variaveis
   while (termo<=num) {
      S += termo; // Atualiza S
      termo++; //Incrementa termo
   }
   return S; // Retorna o valor calculado para o codigo que chama a funcao
}

int produto(int num) {
   int termo = 1, P = 1; //Declara e inicializa as variaveis
   while (termo<=num) {
      P *= termo; // Atualiza P
      termo++; //Incrementa termo
   }
   return P;
}

void setup(){
   pinMode(I0,INPUT);  // Configura os pinos I0, I1 e I2 como entrada
   pinMode(I1,INPUT);
   pinMode(I2,INPUT);
   Serial.begin(9600); // Abre a porta serial, define a taxa de dados de comunicação serial para 9600 bps
}

void loop(){
   int a, b, c, saida; // Declara as variáveis internas a funcao loop 
   a = digitalRead(I0); // Le a entrada e atribui o valor lido a variavel
   b = digitalRead(I1);
   c = digitalRead(I2);
   if (a==1)
      saida = soma(a+2*b+4*c); // Entrada decimal impar chama funcao soma da combinacao da entrada
   else 
      saida = produto(a+2*b+4*c); // Entrada decimal par chama funcao produto da combinacao da entrada
   Serial.println(saida,DEC);
   delay(3000);
}
