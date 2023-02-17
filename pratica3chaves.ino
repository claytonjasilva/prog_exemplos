#define I0 2; // entradas binárias LEDs
#define I1 3;
#define I2 4;
#define onoff 5;

int converteDecimal(int b0, int b1, int b2) {
   int decimal = 0;
   decimal = b0 + b1 * 2 + b2 * 4; // Conversão pela notação polinomial
   return decimal
}

void setup(){
   pinMode(I0,INPUT);
   pinMode(I1,INPUT);
   pinMode(I2,INPUT);
}

void loop(){
   int a, b, c, saida;
   if
   a = digitalRead(I0);
   b = digitalRead(I1);
   c = digitalRead(I2);
   saida = converteDecimal(a,b,c);
}
