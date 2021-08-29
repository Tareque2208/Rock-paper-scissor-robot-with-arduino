#include <Servo.h>

Servo s1,s2,s3,s4;

void setup() {
  Serial.begin(9600);
  s1.attach(2);
  s2.attach(3);
  s3.attach(4);
  s4.attach(5);
  s1.write(90);
  s2.write(90);
  s3.write(90);
  s4.write(90);
}

void loop() {
  if(Serial.available()>0){
    char state = Serial.read();
    if(state == 'P'){
      s1.write(10);
      s2.write(10);
      s3.write(10);
      s4.write(10);
    }
    else if(state == 'R'){
      s1.write(150);
      s2.write(150);
      s3.write(150);
      s4.write(150);
    }
    else if(state == 'S'){
      s1.write(150);
      s2.write(150);
      s3.write(10);
      s4.write(10);
    }
    else{
      s1.write(10);
      s2.write(10);
      s3.write(10);
      s4.write(10);
    }
  }
}
