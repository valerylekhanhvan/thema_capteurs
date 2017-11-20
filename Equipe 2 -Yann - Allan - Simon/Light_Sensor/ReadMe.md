# Grove Light Sensor
###### Réalisé par Yann Roumegoux - Allan Boubat - Simon Sublon

 Ce programme a pour but simple de faire fonctionner le capteur et de faire afficher la valeur reçu par le capteur sur le serial moniteur. 
 
Liste du matériel a posséder:

 * Carte Arduino UNO
 * Light Sensor 
 * Logiciel Arduino IDE 1.8
 * 1 câble
 * Arduino Shield
 
 
### Câblage 

il vous suffit de brancher le light sensor sur le pin A0 de l'adruino shield et bien sûr relier celui-ci a la carte arduino UNO.

### Programmation
 
Voici le code de nôtre programme: 

``` C++
void CapteurLumiere(int time)
{
  Light= analogRead(LightSensor); 
  Serial.print("Valeur = ");       
  Serial.println(Light);
  delay(time);                      
} 
```
Nous avons crée une fonction CapteurLumière pour faciliter l'utilisation de ce programme. 
```
void loop() 
{
  CapteurLumiere(500);              
}  
```
Dans les parenthèses, il faut indiqué un temps en millisecondes pour lequel le moniteur va afficher les valeurs lu par le capteur.

Pour plus d'information sur le capteur de lumière vous pouvez consulter sa documentation sur [Wiki.seeds](http://wiki.seeed.cc/Grove-Light_Sensor/).
Si vous avez des question n’hésitez pas a me contacter via [Github](https://github.com/yannroumegoux).


