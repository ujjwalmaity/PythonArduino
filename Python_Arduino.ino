char serialData;

void setup()
{
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);

  Serial.println("Hi!, I am Arduino");
  //Serial.print("Hi!, I am Arduino\n");
  //Serial.write("Hi!, I am Arduino\n");

  Serial.println("Enter 1 to turn ON LED and 0 to turn OFF LED");
}

void loop()
{
  /*  
  while (Serial.available())
  {
    serialData = Serial.read();
    Serial.print(serialData);
  }
  */

  if (Serial.available() > 0)
  {
    serialData = Serial.read();
    if (serialData == '1')
    {
      digitalWrite(LED_BUILTIN, HIGH);
      Serial.println("LED turned ON");
    }
    else if (serialData == '0')
    {
      digitalWrite(LED_BUILTIN, LOW);
      Serial.println("LED turned OFF");
    }
  }
}
