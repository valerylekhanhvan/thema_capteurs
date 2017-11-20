// Fait par Baptiste Négrevergne, Théo Moirat, Jules Godin et Efren Montes Trejo

#include <Wire.h>    // Initialisation de la librairie Wire.h
#include "rgb_lcd.h" //Initialisation  de la librairie rgb_lcd.h
#include <math.h>    // Initialisation de la librairie math.h
 
rgb_lcd lcd; //
 
  const int colorR = 255; // Couleur rouge au maximum d'intensité
  const int colorG = 255; // Couleur vert au maximum d'intensité
  const int colorB = 255; // Couleur bleu au maximum d'intensité
                          // En ayant les trois couleurs réglé à leur maximum nous obtenons un écran blanc qui facilite la lecture.
                       
  const int B=4200000;          // constante B              
  const int R0 = 100000;        // valeur en Ohms de la résistance R1 du schéma electronique du capteur        
  const int CapteurTemp = A0;   // Pin utilisé pour cette expérience : Analogue pin 0
 
void setup()
{
    Serial.begin(9600);                    // Ouvre le port série et fixe le debit de communication à 9600 bauds
    
    lcd.begin(16, 2);                      // Nous indiquons à l'Arduino que l'ecran LCD possède 2 lignes et 16 colonnes
    
    lcd.setRGB(colorR, colorG, colorB);    // Cette fonction nous permet de varier l'intensité des couleurs de l'écran LCD dans les "const int color"
    
    delay(500);                            // Délai en milliseconde (= 0,5 seconde ici)
   
}
 
void loop()
{
    int a = analogRead(CapteurTemp );   // je demande à l'Arduino de mesurer en volt la valeur du pin A0 et de l'associer à la valeur "a"
    float temperature;                  // Je crée une variable qui peut être un nombre à virgule
    
    temperature = capteurTemp(a);       //J'assigne à la variable "temperature" la valeur que me retourne la fonction capteurTemp() pour la valeur "a"
    
    afficheMessage();
    lcd.setCursor(0, 1);                // positionnement du curseur en deuxièmpe ligne et première colonne pour placer le debut de texte.
    lcd.print("Il fait ");              // fonction pour demander à l'Arduino d'afficher le texte sur le moniteur LCD
    
    lcd.setCursor(8, 1);                // positionnement du curseur en deuxièmpe ligne et neuvième colonne pour placer le debut de texte.
    lcd.print(temperature);             // fonction pour demander à l'Arduino d'afficher la valeur de la variable "temperature" sur le moniteur LCD
    
    lcd.setCursor(13, 1);               // positionnement du curseur en deuxièmpe ligne et quatorzième colonne pour placer le debut de texte.
    lcd.print(" C ");                   // fonction pour demander à l'Arduino d'afficher le C de Celsius entre parenthèse sur le moniteur LCD
}

float capteurTemp(int x){                                    // Initialisation de la fonction capteurTemp()
  
  float R = 1023.0/((float)x)-1.0;                           // Procèdure qui permet de partir d'une valeur analogique 
  R = 100000.0*R;                                            // en Volts pour les convertir en une valeur numérique
  float temp=1.0/(log(R/100000.0)/B+1/298.15)-273.15;        //  et ainsi avoir un résulat plus parlant pour l'humain : des °C
  return temp;                                               //Cela sert a retourner la valeur de temp en fin de fonction
}

void afficheMessage(){               // Initialisation de la fonction afficheMessage()
  
    lcd.setCursor(0, 0);             // positionnement du curseur en première ligne et première colonne pour placer le debut de texte.
    lcd.print("C'est un message");   // fonction pour demander à l'Arduino d'afficher le texte sur le moniteur LCD
    delay(500);                      // délai entre chaque mesure en milliseconde (= 0,5 seconde ici)
   
}

