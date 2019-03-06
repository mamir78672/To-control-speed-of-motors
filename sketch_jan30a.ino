int en1=4;
int en2=5;
int in1=8;
int in2=9;
int in3=10;
int in4=11;
void setup()
{
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(in3,OUTPUT);
  pinMode(in4,OUTPUT);
  pinMode(en1,OUTPUT);
  pinMode(en2,OUTPUT);
  pinMode(pin, INPUT); 
  
}
  
void motorC()
{digitalWrite(in1, HIGH);
 digitalWrite(in2, LOW);
 digitalWrite(in3, HIGH);
 digitalWrite(in4, LOW);
 // accelerate motor speed
 for (int i = 0; i < 256; i++)
 {
 analogWrite(en1, i);
 analogWrite(en2, i);
 delay(20);
 }
 // decelerate motor speed
 for (int i = 255; i >= 0; --i)
 {
 analogWrite(en1, i);
 analogWrite(en2, i);
 delay(20);
 }
 // now turn off motors
 digitalWrite(in1, HIGH);
 digitalWrite(in2, HIGH);
 digitalWrite(in3, HIGH);
 digitalWrite(in4, HIGH);
}
void loop()
{
 motorC();
 delay(1000);
}




  
  
