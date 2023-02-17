#define I0 2; // entradas binárias LEDs
#define I1 3;
#define I2 4;

int soma(int num) {
   int termo = 1, S = 0;
   while (termo<=num) {
      S += termo;
      termo++;
   }
   return S;
}

int produto(int num) {
   int termo = 1, P = 1;
   while (termo<=num) {
      P *= termo;
      termo++;
   }
   return P;
}

void setup(){
   pinMode(I0,INPUT);
   pinMode(I1,INPUT);
   pinMode(I2,INPUT);
   Serial.begin(9600);
}

void loop(){
   int a, b, c, saida;
   a = digitalRead(I0);
   b = digitalRead(I1);
   c = digitalRead(I2);
   if (I0)
      saida = soma(a+2*b+4*c);
   else 
      saida = produto(a+2*b+4*c);
   Serial.println(saida,DEC);
   delay(3000);
}
