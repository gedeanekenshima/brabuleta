#include <Servo.h> 
 
Servo myservo1;  // cria instancia do servo1

Servo myservo2; // cria instancia do servo2               
 
int pos = 30;    // variavel de posicao dos servos = 30 graus
 
void setup() 
{ 
  myservo1.attach(9);  // atribui pino 9 ao servo1
  myservo2.attach(10); // atribui pino 10 ao servo2
} 
 
void loop() 
{ 
  for(pos = 30; pos <= 100; pos += 1) // laco FOR de variacaos dos servos 
  {                                  // de 1 em 1 grau 
    myservo1.write(pos);              // manda variacao ao servo1
    myservo2.write(pos);              // manda variacao ao servo2
    delay(15);                       // aguarda 15 milisegundos 
  } 
  for(pos = 100; pos>=30; pos-=1)     // retorno dos servos para posicao original 
  {                                
    myservo1.write(pos);              // manda variacao ao servo1
    myservo2.write(pos);              // manda variacao ao servo2
    delay(15);                       // aguarda 15 milissegundos 
  } 
} 
