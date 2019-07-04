void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  Serial.begin(9600);
}
 int income;
void loop()
{
   digitalWrite(6,LOW);
  delay(10);
 
  if(Serial.available()>0)
  {
    income=Serial.read();
  }
  income=income-'0';
   digitalWrite(2,income&0x1?HIGH:LOW);
  digitalWrite(3,income&(0x1<<1)?HIGH:LOW);
  digitalWrite(4,income&(0x1<<2)?HIGH:LOW);
  digitalWrite(5,income&(0x1<<3)?HIGH:LOW);
  delay(1000);
  
  
}
  
