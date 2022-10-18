
void setup()
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

String data_ =  "HCMUTE - 2022";

unsigned long long timer = 0;

void loop()
{
  if (millis() - timer > 1000)
  {
    
      Serial.println(data_);
      
    timer = millis();

    }
   
while(Serial.available())
{
  char c = Serial.read(); 
  if (c == '1')
  {
    digitalWrite(13, HIGH);
  }
  
  else if ( c == '2')
  {
    digitalWrite(13, LOW);
  }
 }
}




