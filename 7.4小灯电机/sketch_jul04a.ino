void setup()
{
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
    pinMode(9,OUTPUT);
    pinMode(10,OUTPUT);
  
   Serial.begin(9600);
    pinMode(8,OUTPUT);
    pinMode(7,OUTPUT);;
     
}

void loop()
{
  int income=0;
  if(Serial.available()>0)
  {
    income=Serial.read();
    switch(income)
    {
      case 'f': forword();break;
      case 'b': backword();break;
      case 'r': right();break;
      case 'l': left();break;
      case 's': stop();break;
      
    }
  }
}

void forword()
{
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(10,HIGH);
  digitalWrite(9,LOW);
}

void backword()
{
  digitalWrite(6,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(10,HIGH);
  digitalWrite(9,LOW);
}

void right()
{
  digitalWrite(6,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(9,HIGH);
  digitalWrite(10,LOW);
  digitalWrite(8,HIGH);
}

void left()
{
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(9,HIGH);
  digitalWrite(10,LOW);
  digitalWrite(9,HIGH);
}

void stop()
{
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
}
