/*Yann ROUMEGOUX
 * 06-10-2017
 * THEMA-CAPTEUR
 * programme ayant pour but d'activer le buzzer lorqu'il y a plus
 * de lumière.
*/
// On branche le capteur de lumière sur l'entre A0
int LightSensor = A0;
int Light;
// On branche le buzzer sur le pin D2
int Buzzer = 2;
int Seuil = 50;

void setup()
{
  // On ouvre le serial monitor
  Serial.begin(9600);
  // On déclare le Buzzer comme étant une sortie
  pinMode(Buzzer,OUTPUT);
}

void loop() 
{
  // Light= valeur émise par le capteur de lumière
  Light= analogRead(LightSensor);
  // On écrit sur le serial monitor la valeur "Light"
  Serial.print(Light);
  Serial.println();
  // Delai de 1sec
  delay(1000);
  // Si "Light"=0 alors le buzzer s'active sinon il s'éteint
  if(Light < Seuil)
  {
    //
    digitalWrite(Buzzer,HIGH);
  }
  else
  {
    digitalWrite(Buzzer,LOW);
  }
}


