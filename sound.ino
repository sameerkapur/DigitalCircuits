

void setup()
{
  pinMode(13, OUTPUT); //Will be our signal that the motion sensor has been tripped
  pinMode(7, INPUT); //connect 7 to the OUT of the PIR sensor a Digital Input

}

void loop()
{
  if(digitalRead(7) == HIGH)
  {
    digitalWrite(13, HIGH);
    tone(9, 90,100);
    delay(100);
    tone(9, 90, 100);
    delay(50);
   
    tone(9, 360, 100);
    delay(1000);
    tone(9, 360, 1000);
  delay(100);
    tone(9, 500, 100);
    tone(9, 500, 100);
    delay(60);
    tone(9, 500, 100);
    delay(60);
  }
  else
  {   
   digitalWrite(13, LOW);     //LED turns off when there is no motion detected
  }

delay(1); //I like to give my arduino's a 1ms break every now and then.
}
