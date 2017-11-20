/*Yann ROUMEGOUX - Allan BOUBAT - Simon SUBLON
 * 14-11-2017
 * THEMA-CAPTEUR
 * Affichage du capteur de toucher toute les 0.5 seconde
*/

int TouchSensor = 2;                    // On déclare le pin 2 connecter au capteur 

void setup()
{
  pinMode(TouchSensor, INPUT);           // On déclare le capteur comme une entré 
  Serial.begin(9600);                    // On ouvre le serial moniteur
}

void loop ()
{
  BoutonCapacitif(500);                   //On va chercher la fonction BoutonCapacitif et on indique un delai
}
void BoutonCapacitif(int time)
{
  int Valeur = digitalRead(TouchSensor); // On lit la valeur du capteur 
  Serial.print("Valeur du capteur = ");  // On écrit dans le serial moniteur ( Valeur du capteur = (Valeur( 0 ou 1))
  Serial.println(Valeur);
  delay(time);                           
}

