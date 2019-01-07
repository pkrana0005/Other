//#include <LiquidCrystal.h>
//LiquidCrystal lcd(9,7,8,10,11,12,13);

#define rmp 12
#define rmn 13
#define lmp 10
#define lmn 11

#define enl A1
#define enr A0
int i;
void setup() {
  pinMode(rmp,OUTPUT);
  pinMode(rmn,OUTPUT);
  pinMode(lmp,OUTPUT);
  pinMode(lmn,OUTPUT);
  
  pinMode(enl,OUTPUT);
  pinMode(enr,OUTPUT);
  //lcd.begin(16,2);
  Serial.begin(9600);
}

void loop() {
  
  
    digitalWrite(lmp,HIGH);
    digitalWrite(lmn,LOW);
    digitalWrite(rmn,LOW);
    digitalWrite(rmp,HIGH);
    for(i=0;i<225;i+=10)
    {analogWrite(enl,i);
      analogWrite(enr,i);
      Serial.println(i);
      delay(3000);
      }
    

}
