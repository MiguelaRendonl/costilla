#include <Servo.h>

#define pinBase 12
#define pinderecho 11
#define pinizquierdo 10
#define pinpinza 9

Servo Base;
Servo derecho;
Servo izquierdo;
Servo pinza;

void setup() {
  // put your setup code here, to run once:
Base.attach(pinBase);
derecho.attach(pinderecho);
izquierdo.attach(pinizquierdo);
pinza.attach(pinpinza);

 //Inicialización del brazo
 pinza.write(3);
 Base.write(0);
 delay (2000);
 Base.write(80);
 delay (2000);
 Base.write(165);
 delay (2000);
 Base.write(80);
  delay (2000);
 derecho.write(30);
 delay (2000);
 derecho.write(60);
 delay (2000);
 derecho.write(90);
 delay (2000);
 derecho.write(120);
 delay (2000);
 derecho.write(30);
 delay (2000);
 izquierdo.write(25);
 delay (2000);
 izquierdo.write(60);
 delay (2000);
 izquierdo.write(90);
 delay (2000);
 izquierdo.write(140);
 delay (2000);
 izquierdo.write(30);
 delay (2000);
 izquierdo.write(145);
 delay (2000);
 pinza.write(3);
 delay (2000);
 pinza.write(10);
 delay (2000);
 pinza.write(20);
 delay (2000);
 pinza.write(30);
 delay (2000);
 pinza.write(40);
  delay (2000);
 pinza.write(0);



}

void loop() {
  // put your main code here, to run repeatedly:
}
