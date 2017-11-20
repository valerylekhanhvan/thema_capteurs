/*Yann ROUMEGOUX - Allan BOUBAT - Simon SUBLON
 * 14-11-2017
 * THEMA-CAPTEUR
 * Affichage du capteur de lumière toute les 0.5s
*/
int LightSensor = A0;               // On branche le capteur de lumière sur l'entre A0
int Light;

void setup()
{
  Serial.begin(9600);               // On ouvre le serial monitor
}

void loop() 
{
  CapteurLumiere(500);              // On va chercher la fonction CapteurLumiere et on indique un delai
}

void CapteurLumiere(int time)
{
  Light= analogRead(LightSensor);  // Light= valeur émise par le capteur de lumière
  Serial.print("Valeur = ");       // On écrit sur le serial monitor la valeur "Light"
  Serial.println(Light);
  delay(time);                      
}

