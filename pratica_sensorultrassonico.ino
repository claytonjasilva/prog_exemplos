//Este código captura e armazena as distâncias detectadas por um sensor ultrassônico
#define VEL_SOM 340 // definição da velocidade do som, em metros por seg

// declaração das variáveis globais
int pinEcho=6; // pino do Arduíno ligado ao pino Echo do sensor
int pinTrig=7; // pino do Arduíno ligado ao pino Trig do sensor

float disparaTrig(){  // A função diapara um sinal de trigger no pino pinTrig com largura de 10 microssegundos
  digitalWrite(pinTrig,HIGH);
  delayMicroseconds(10);
  digitalWrite(pinTrig,LOW);
  return pulseIn(pinEcho,HIGH);  // determina o tempo em microssegundos
}

void setup() {
  pinMode(pinEcho,INPUT);  // define os pinos do Arduíno
                           // Observe que o pino Echo de saída do módulo ultrassônico se conecta com o pino pinEcho de entrada do Arduíno   
  pinMode(pinTrig,OUTPUT); // Analogamente, o pino Trig de entrada do módulo ultrassônico se conecta com o pino pinTrig de saída do Arduíno
  // inicializa o pino de Trig e a porta serial
  digitalWrite(pinTrig,LOW);
  Serial.begin(9600);

}

void loop() {
  int comando;
  float tempo, distancia;
  if (Serial.available() > 0) { // Verifica se há sinal disponível na serial
    // leitura do byte de entrada:
    comando = Serial.read();
    if (comando == 'A'){
      tempo = disparaTrig(); // dispara sinal de Trig E retorna a duracao do pulso (em microssegundos) que indica a distancia
      distancia=tempo*0.000001*VEL_SOM*100/2; // determina a distancia em cm     
      Serial.println("Distancia em centimetros: "); // apresenta o resultado
      Serial.println(distancia,DEC);  
    }
  }
  delay(2000); //mantém ciclo de 2 seg de trabalho do sensor
}
