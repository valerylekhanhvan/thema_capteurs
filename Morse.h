/* Nom:         Morse.h
 * Author:      Valéry LE KHANH VAN
 * Date:        17/11/2017
 * Description: fichier d'entête
 */

// Si Morse.h n'a pas été appelé, alors on le déclare
#ifndef Morse_h
#define Morse_h

// Déclaration permettant d'accéder au code ARDUINO
#include "Arduino.h"


// Classe Morse
class Morse
{
  public:
    Morse(int pin);
    void dot();
    void dash();
  private:
    int _pin;
};

#endif