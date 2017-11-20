const int pinsensor = A0;
const int pinbutton = 1;
bool button = 0;

void setup()
{
    Serial.begin(115200);
    pinMode (1 ,OUTPUT);
}

void loop()
{
  if (digitalRead(pinbutton) == HIGH)
  {
    button ++;
    if (button == 1)
    {
      long sum = 0;
      for(int i=0; i<32; i++)
      {
        sum += analogRead(pinsensor);
      }
      
      sum >>= 5;
      long value = sum / 10;
      Serial.print(value);
      Serial.println("dB");
    }
    delay(100);
  }
}
