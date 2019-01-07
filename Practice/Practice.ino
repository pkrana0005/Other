#define echo D7
#define trig D6

int duration;
int cm;
void setup()
{Serial.begin(115200);
  pinMode(echo,INPUT);
  pinMode(trig,OUTPUT);
  
  }

void loop()
{
   check();
   delay(200);
  }

void check()
{
   digitalWrite(trig,LOW);
   delayMicroseconds(2);
   digitalWrite(trig,HIGH);
   delayMicroseconds(10);
   digitalWrite(trig,LOW);
   duration=pulseIn(echo,HIGH);
   cm=duration/29/2;
   Serial.print("Distance=");
   Serial.println(cm);
  }
