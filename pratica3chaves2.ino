#define I0 2 // define a macro relativa a entrada (pino) 2 - em cada pino um LED
#define I1 3
#define I2 4
#define S0 5 // define a macro relativa a saida (pino) 5 - em cada pino um LED
#define S1 6
#define S2 7


void setup(){
   pinMode(I0,INPUT); // Configura os pinos I0, I1 e I2 como entrada
   pinMode(I1,INPUT);
   pinMode(I2,INPUT);
   pinMode(S0,OUTPUT); // Configura os pinos S0, S1 e S2 como saida
   pinMode(S1,OUTPUT);
   pinMode(S2,OUTPUT);
}

void loop(){
   int a, b , c; // Declara as variáveis internas a funcao loop 
   a = digitalRead(I0); // Le a entrada e atribui o valor lido a variavel
   b = digitalRead(I1);
   c = digitalRead(I2);
   digitalWrite(S0,!a); // Inverte o valor lógico lido na entrada e acende a respectiva saída
   digitalWrite(S1,!b);
   digitalWrite(S2,!c);
   delay(5000); // Proporciona um atraso de 5000 milissegundos entre dois loops 
}
