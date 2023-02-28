int pirsensor=5;
int led1=7;
int led2=6;
int buzzer=8;
int hareket;
int fa = 350;
int mi = 331;

void setup() {
 pinMode(pirsensor,INPUT);

}

void loop() {
hareket=digitalRead(pirsensor);
if (hareket == HIGH)
{ 
 
 
  tone(buzzer, fa);
  delay(150);
  noTone(buzzer);
  tone(buzzer, mi);
  delay(150);
  noTone(buzzer);
  tone(buzzer, fa);
  delay(150);
  noTone(buzzer);
  tone(buzzer, mi);
  delay(150);
  noTone(buzzer);
  digitalWrite(7,HIGH);
  delay(300);
  digitalWrite(7,LOW);
  digitalWrite(6,HIGH);
  delay(300);
  digitalWrite(6,LOW);

  tone(buzzer, fa);
  delay(150);
  noTone(buzzer);
  tone(buzzer, mi);
  delay(150);
  noTone(buzzer);
  tone(buzzer, fa);
  delay(150);
  noTone(buzzer);
  tone(buzzer, mi);
  delay(150);
  noTone(buzzer);
  digitalWrite(7,HIGH);
  delay(300);
  digitalWrite(7,LOW);
  digitalWrite(6,HIGH);
  delay(300);
  digitalWrite(6,LOW);

  tone(buzzer, fa);
  delay(150);
  noTone(buzzer);
  tone(buzzer, mi);
  delay(150);
  noTone(buzzer);
  tone(buzzer, fa);
  delay(150);
  noTone(buzzer);
  tone(buzzer, mi);
  delay(150);
  noTone(buzzer);
  digitalWrite(7,HIGH);
  delay(300);
  digitalWrite(7,LOW);
  digitalWrite(6,HIGH);
  delay(300);
  digitalWrite(6,LOW);
  
  
    
  }
  
  
   

}
