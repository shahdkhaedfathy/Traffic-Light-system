void setup()
{
 pinMode(12,OUTPUT);
 pinMode(11,OUTPUT);
 pinMode(10,OUTPUT);
}
void loop()
{
  digitalWrite(12,1);
  delay(1000);
  digitalWrite(11,1);
  delay(250); 
  digitalWrite(11,0);
  delay(250);
  digitalWrite(11,1);
  delay(250); 
  digitalWrite(11,0);
  delay(250);
  digitalWrite(11,1);
  delay(250);
 digitalWrite(11,0);
digitalWrite(12,0);
 digitalWrite(10,1);
  delay(1000);
  digitalWrite(10,0);
 
  
    
  
  