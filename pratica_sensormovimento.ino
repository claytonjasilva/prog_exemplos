const int pinoPIR = 3; //PINO DIGITAL UTILIZADO PELO SENSOR DE PRESENÇA
const int pinoLED = 2; //PINO DIGITAL UTILIZADO PELO LED

void setup(){
  pinMode(pinoLED, OUTPUT); //DEFINE O PINO COMO SAÍDA
  pinMode(pinoPIR, INPUT); //DEFINE O PINO COMO ENTRADA
}

void loop(){
 if(digitalRead(pinoPIR) == HIGH){ 
    digitalWrite(pinoLED, HIGH);
 }
 else{ //SENÃO, FAZ
  digitalWrite(pinoLED, LOW);
 }
}
