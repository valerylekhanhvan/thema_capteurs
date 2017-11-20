# Grove Touch Sensor
###### Réalisé par Yann Roumegoux - Allan Boubat - Simon Sublon

Ce programme affiche sur le serial moniteur si le bouton capacitif est activer ou désactiver. 
 
Liste du matériel a posséder:

 * Carte Arduino UNO
 * Touch Sensor
 * Logiciel Arduino IDE 1.8
 * 1 câble
 * Arduino Shield
 
 
### Câblage 

il vous suffit de brancher le bouton capacitif sur le pin D2 de l'adruino shield et bien sûr relier celui-ci a la carte arduino UNO.

### Programmation
 
Voici le code de nôtre programme: 

``` C++
void BoutonCapacitif(int time)
{
  int Valeur = digitalRead(TouchSensor); 
  Serial.print("Valeur du capteur = ");
  Serial.println(Valeur);
  delay(time);                           
}
```
Nous avons crée une fonction BoutonCapacitf pour faciliter l'utilisation de ce programme. Celui-ci ce trouve dans le void loop.
```
void loop ()
{
  BoutonCapacitif(500);
}  
```
Dans les parenthèses, il faut indiqué un temps en millisecondes pour lequel le moniteur va afficher les valeurs lu par le capteur.

* Soit un 1 lorsque on appui sur le bouton
* Soit un 0 .

Pour plus d'information sur le capteur capacitif vous pouvez consulter sa documentation sur [Wiki.seeds](http://wiki.seeed.cc/Grove-Touch_Sensor/).
Si vous avez des question n’hésitez pas a me contacter via [Github](https://github.com/yannroumegoux).


