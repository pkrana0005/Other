#define rmp 4
#define rmn 5
#define lmp 2
#define lmn 3

void setup() 
{
  pinMode(rmp,OUTPUT);
  pinMode(rmn,OUTPUT);
  pinMode(lmp,OUTPUT);
  pinMode(lmn,OUTPUT);
  
  
}

void loop()
{
  fm();
  }
  


void fm()
{
  digitalWrite(lmp,HIGH);
  digitalWrite(lmn,LOW);
  digitalWrite(rmn,LOW);
  digitalWrite(rmp,HIGH);
}
void bm()
{
   digitalWrite(lmp,LOW);
  digitalWrite(lmn,HIGH);
  digitalWrite(rmn,HIGH);
  digitalWrite(rmp,LOW);
}
void lm()
{
   digitalWrite(rmn,LOW);
   digitalWrite(rmp,HIGH);
   digitalWrite(lmp,LOW);
   digitalWrite(lmn,LOW);
}
void rm()
{
   digitalWrite(lmp,HIGH);
   digitalWrite(lmn,LOW);
   digitalWrite(rmn,LOW);
   digitalWrite(rmp,LOW);
   
 }
void st()
{
   digitalWrite(lmp,LOW);
  digitalWrite(lmn,LOW);
  digitalWrite(rmn,LOW);
  digitalWrite(rmp,LOW);
}
