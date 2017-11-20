/* Nom:         codeMorse.ino
 * Author:      Valéry LE KHANH VAN
 * Date:        17/11/2017
 * Description: programme arduino permettant d'illustrer
 * le Code Morse ... _ _ _ ... (1832)
 * https://fr.wikipedia.org/wiki/Morse_(alphabet)
 * Matériel:    arduino UNO R3 + kit Groove Seed + Buzzer v1.2
 */

// Déclaration de la variable pin correspondant à D4 
int pin = 4;

// Routine d'initialisation
void setup()
{
  pinMode(pin, OUTPUT);
}

// Routine de la boucle perpétuelle
void loop()
{
  dot(); dot(); dot();
  dash(); dash(); dash();
  dot(); dot(); dot();
  delay(3000);
}

// Fonction . du code Morse
void dot()
{
  digitalWrite(pin, HIGH);
  delay(250);
  digitalWrite(pin, LOW);
  delay(250);
}

// Fonction du _ du code Morse
void dash()
{
  digitalWrite(pin, HIGH);
  delay(1000);
  digitalWrite(pin, LOW);
  delay(250);
}