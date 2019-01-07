#include <Servo.h>
int i;
Servo myservo;
void setup() {
  // put your setup code here, to run once:
myservo.attach(6);
}

void loop() {
  // put your main code here, to run repeatedly:

 for(i=0;i<181;i++)
 {
  myservo.write(i);
  }
  for(i=180;i>0;i--)
 {
  myservo.write(i);
  }
}
