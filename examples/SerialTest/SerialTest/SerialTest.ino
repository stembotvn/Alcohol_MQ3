#include <MQ3_alcohol.h> 

MQ3 mq3;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
Serial.println("Calibrating...");
mq3.setupMQ3(A0,1000);
mq3.calibrateMQ3();
Serial.println("Ready");
delay(1000);

}

void loop() {
  // put your main code here, to run repeatedly:
Serial.print("Alcohol: "); Serial.print(mq3.getAlcohol()); Serial.println("   mg/L");
delay(1000);

}