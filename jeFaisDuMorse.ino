/* Nom:         jeFaisDuMorse.ino
 * Author:      Valéry LE KHANH VAN
 * Date:        17/11/2017
 * Description: programme arduino permettant d'illustrer
 * le Code Morse ... _ _ _ ... (1832)
 * https://fr.wikipedia.org/wiki/Morse_(alphabet)
 * Matériel:    arduino UNO R3 + kit Groove Seed + Buzzer v1.2
 */

#include <Morse.h>
// Instanciation de deux classes pour utiliser deux capteurs
// morse en D4
// morseLed en D3
Morse morse(4);
Morse morseLed(3);

void setup()
{
}

void loop()
{
  morse.dot(); morseLed.dot();
  morse.dash(); morseLed.dash();
  morse.dot(); morseLed.dot();
  // Note: il y a un léger décalage entre le son et la lumière  
  morse.dash(); morse.dot(); morse.dash();
  morse.dot(); morse.dash(); morse.dot();
  delay(3000);
}