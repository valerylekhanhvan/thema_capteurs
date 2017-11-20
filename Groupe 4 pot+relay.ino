/*
 * Groupe 4 (de Belinay, Marchi, Mournetas, Landron)
 * 20:11:2017
 * 
 * 
 * 
MIT License

Copyright (c) 2017 

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE. 
 */


int pot = A0;                         // utilise la pin analogue A0 pour conecter le potentiometre
int relay = 4;                        // le relai est branché au pin digital 4
int val0;                             // la variable qui lit la valeur analogique du pin 0
int percent = 50 ;                    // le pourcentage au-dessus duquel le relay s'active

void setup() {
  
Serial.begin(9600);                   // ouvre la fenêtre de communication 9600
pinMode(relay, OUTPUT);               // relai est une sortie

}

void loop() {

  capteurPotar();                     // appel la fonction capteurPotar
  commandeRelais();                   // appel la fonction commandeRelais
}


void commandeRelais() {               // déclaration de notre fonction

if (val0 >= percent){                 // si la valeur est supérieur ou égal au pourcentage
  digitalWrite(relay, HIGH);          // active le relai
  }
if (val0 < percent){                  // si la valeur est inférieur au pourcentage
  digitalWrite(relay, LOW);           // active le relai
                   }
}

void capteurPotar() {                 // déclaration de notre fonction

  val0 = analogRead(pot);             // lit la valeur du potentiomètre (valeur entre 0 et 662) 
  val0 = map(val0, 0, 680, 0, 100);   // met les valeurs de val0 a l'echelle entre 0 et 100 
  delay(500);                         // laisse un delai de 0,5 seconde
  Serial.print("percent: ");          // afiche "percent"
  Serial.println (val0);              // afiche la valeur de val0 dans la comunication, puis vas a la ligne

}


