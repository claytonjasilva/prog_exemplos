#define I0 2; // entradas binárias LEDs
#define I1 3;
#define I2 4;
#define S0 5; // saidas binárias LEDs
#define S1 6;
#define S2 7;


void setup(){
   pinMode(I0,INPUT);
   pinMode(I1,INPUT);
   pinMode(I2,INPUT);
   pinMode(S0,OUTPUT);
   pinMode(S1,OUTPUT);
   pinMode(S2,OUTPUT);
}

void loop(){
   int a, b , c;
   a = digitalRead(I0);
   b = digitalRead(I1);
   c = digitalRead(I2);
   digitalWrite(S0,!I0);
   digitalWrite(S1,!I1);
   digitalWrite(S2,!I2);
   delay(3000);
}
