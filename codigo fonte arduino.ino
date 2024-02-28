const int btn1 = 0;

int cond = 0;

void setup()
{ 
  pinMode(13, OUTPUT); //luz verde
  pinMode(10, OUTPUT); //luz vermelha
  pinMode(btn1, INPUT);
}

void loop()
{
   cond = digitalRead(btn1);
  
  if (cond == HIGH) {
     
  digitalWrite(13, LOW); 
  digitalWrite(10, HIGH);
  delay(5000); 
   }
  
    if (btn1 == LOW) {
       if (cond == LOW) {
  digitalWrite(13, HIGH); 
  digitalWrite(10, LOW);
  delay(5000); 
     }
    }
}