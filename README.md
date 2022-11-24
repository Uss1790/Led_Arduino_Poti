# Led_Arduino_Poti
Der Poti am Arduino Bestimmt wie viele der Leds im Led Streifen an sind

##Genutze teile:
  1  *    Potentiometer
  1  *    Arduino Mega 2560
  1  *    USB2.0 Kabel auf USB A
  1  *    Breadboard
  12 *    Jumper Cable male zu Male
  8  *    Led mit Wunschfarbe
  8  *    Widerstand <<Ohm Anzahl recht egal, hier 100>>
 ##

Zu begin den Serial Monitor auf 9600 BAUD setzen und die Leds an die Digitalen Pins:

2
3
4
5
6
7
8
9

anschließen.

an den analogen Pin 10 kommt in die Mitte des Potentiometers, an eine der beiden Seiten wird GND angeschlossen und an den anderen äußeren Pin 5V

Alle Leds mit einem Widerstand parallel an GND anschließen, die 5V kommen ja von den digitalen Pins
Die Datei Schematic.png enthält einen detaillierten visuellen Aufbau der Schaltung


anschließend einfach den Potentiometer verstellen und die Anzahl der leuchtenden Leds ändert sich entsprechend
