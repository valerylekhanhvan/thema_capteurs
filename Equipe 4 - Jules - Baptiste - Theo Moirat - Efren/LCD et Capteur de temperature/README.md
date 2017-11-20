# Grove kit Arduino LCD + Capteur de température

Ces instructions vous permettront d'obtenir des détails sur le programme.

Ce programme permet d’afficher la température en degré Celsius ainsi qu’un message sur un écran LCD 16 x 2 via une carte Arduino.

Pour réaliser ce programme nous avons utilisé 

* le Grove Kit Arduino. 
* logiciel Arduino 1.8.4.
* capteur de température
* écran LCD 16 x 2 
* Arduino + Shield
 
# Connectique

Le capteur de température est connecté au shield sur la pin A0 et l'écran LCD sur la pin II2C.

# Programmation
Le programme inclut plusieurs bibliothèques comme la rgb_lcd.h. Les bibliothèques sont des codes qui simplifient l’utilisation d’un capteur, composant ou d’une fonctionnalité.
Ils se téléchargent facilement sur internet. 
 
Nous pouvons régler la couleur en variant l’intensité des 3 couleurs rouges verts et bleus avec "const int color". Les valeurs varient de 0 à 255.
Nous avons mis les trois couleurs à 255 pour obtenir un écran blanc lumineux.

Le calcul de la température est valable pour le capteur de température du Grove Kit Arduino, ainsi cette partie du programme peut varier suivant le composant.
La fonction «  capteurTemp(int x) » permet d’utiliser les données du capteur de température pour renvoyer au reste du programme la température qu’il fait au moyen de “return temp”.
Cette valeur est ensuite affichée sur l’écran LCD
 
 La fonction « afficheMessage() » est très utile car elle synthétise une partie du programme en une fonction que l’on peut utiliser plus tard plus simplement. Nous avons décidé d’afficher à l’écran "C'est un message" avec la fonction lcd.print("C'est un message") le lcd.setCursor(0, 0) sert à positionner ce message à la première colonne de la première ligne.
