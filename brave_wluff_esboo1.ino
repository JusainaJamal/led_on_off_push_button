// C++ code
//

void setup()
{
  pinMode(13, OUTPUT);
  pinMode(4,INPUT);
}
 
int var;
void loop()
{
  var=digitalRead(4);
  if (var==0){
    
    digitalWrite(13,HIGH);
  }
  else
    digitalWrite(13,LOW);
    
  }