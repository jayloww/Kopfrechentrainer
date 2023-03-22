# Kopfrechentrainer

Ihr kleiner Bruder hat Sie gebeten Ihn beim Kopfrechentraining zu unterstützen. 
Als versierter Programmierer entscheiden Sie sich, im hierfür ein einfaches Programm zu schreiben, dass Ihm erlaubt das Einmal Eins, Plus und minusrechnen und Quadratzahlen zu üben. 

Zunächst überlegen Sie sich einen typischen Verlauf des Programms, der durch folgenden Abschnitt gegeben ist:

```text
***************************************
* Willkommen beim Kopfrechentraining. *
***************************************

Ihre Gesamtpunktzahl beträgt: 0

Hauptmenu    
=========

1) Einmaleins
2) Plus/Minus
3) Quadratzahlen
4) Spiel verlassen

Was wollen Sie ueben?
1

Einmaleins
==========

Wie viel ist 3 x 3? 9
Korrekt! Ihre Punktezahl dieses Spiels: 1
Wie viel ist 4 x 7? 28
Korrekt! Ihre Punktezahl dieses Spiels: 2
Wie viel ist 7 x 1? 7
Korrekt! Ihre Punktezahl dieses Spiels: 3
Wie viel ist 6 x 8? 0
Das ist leider falsch. Sie haben in dieser Runde 3 Punkte erreicht.

Ihre Gesamtpunktzahl beträgt: 3

Hauptmenu    
=========

1) Einmaleins
2) Plus/Minus
3) Quadratzahlen
4) Spiel verlassen

Was wollen Sie ueben?
2

Plus/Minus
==========

Wie viel ist 10 + 8? 18
Korrekt! Ihre Punktezahl dieses Spiels: 1
Wie viel ist 8 - 9? -1
Korrekt! Ihre Punktezahl dieses Spiels: 2
Wie viel ist 5 - 10? -5
Korrekt! Ihre Punktezahl dieses Spiels: 3
Wie viel ist 9 + 7? 0
Das ist leider falsch. Sie haben in dieser Runde 3 Punkte erreicht.

Ihre Gesamtpunktzahl beträgt: 6

Hauptmenu    
=========

1) Einmaleins
2) Plus/Minus
3) Quadratzahlen
4) Spiel verlassen

Was wollen Sie ueben?
3

Quadratzahlen
=============

Wie viel ist 8 x 8? 64
Korrekt! Ihre Punktezahl dieses Spiels: 1
Wie viel ist 9 x 9? 81
Korrekt! Ihre Punktezahl dieses Spiels: 2
Wie viel ist 7 x 7? 49
Korrekt! Ihre Punktezahl dieses Spiels: 3
Wie viel ist 8 x 8? 0
Das ist leider falsch. Sie haben in dieser Runde 3 Punkte erreicht.

Ihre Gesamtpunktzahl beträgt: 9

Hauptmenu    
=========

1) Einmaleins
2) Plus/Minus
3) Quadratzahlen
4) Spiel verlassen

Was wollen Sie ueben?
4
Sie haben insgesamt 9 Punkte erreicht.
```

Der Spielverlauf stellt folgende Anforderungen an Ihr Programm:

* Spieler sollen wählen können, welche Rechenart sie trainieren wollen.
* Für jede Rechenart gibt es einen Spielpunktezähler. 
  Dieser wird für jede gelöste Aufgabe um Eins erhöht. 
* Gibt der Spieler ein falsches Ergebnis ein, wird das aktuelle Spiel beendet und das Programm kehrt unter Ausgabe der Gesamtpunktzahl zum Hauptmenu zurück.



## Hilfestellungen

Für die Lösung dieser Aufgabe benötigten Sie die in der Vorlesung kennengelernten Sprachelemente.
Weitere Hilfestellungen finden Sie in diesem Abschnitt.

### Empfohlene Vorgehensweise

1) Implementieren Sie zunächst in der `main`-Funktion das Hauptmenü wie angegeben. 
   Experimentieren Sie mit der Textein- und ausgabe und versuchen Sie diese exakt wie in dem Beispiel zu erzeugen.
   Reagieren Sie auf Nutzereingaben und nutzen Sie für die Auswahl der resultierenden Aktion ein `switch`-Statement.
2) Implementieren Sie nun einzelne Dummy-Funktionen `Einmaleins`, `Quadratzahlen` und `Plusminus`.
   Überlegen Sie sich eventuell notwendige Übergabeparameter und den Rückgabetyp der Funktion.
   Die Funktionen sollen beim Aufruf zuächst nur eine einfache Ausgabe liefern.
3) Erweitern Sie das Hauptprogramm nun so, dass die Funktionen bei entsprechender Nutzereingabe aufgerufen werden.
4) Implementieren Sie nun die einzelnen Rechenübungen.
5) Erweitern Sie ihr Programm nun mit einem Spielstandzähler und einem Gesamtpunktezähler.

### Textein- und ausgabe

Sie können zur Textein- und ausgabe entweder C-Syntax mittels `printf` und `scanf` (C-Style) oder `std::cout` (C++ Style) nutzen.

Für `printf` und `scanf` müssen Sie die C-Headerdatei `cstdio` inkludieren:

```C
#include <cstdio>
```

Für `std::cout`und `std::cin`müssen Sie die C++-Headerdatei `iostream` inkludieren:

```C++
#include <iostream>
```

#### Beispielcode zu `printf`:

```C++
printf("Diese Zeile Code erzeugt eine Textausgabe ohne Zeilenumbruch");
printf("Diese Zeile Code erzeugt eine Textausgabe mit Zeilenumbruch\n"); // \n erzeugt einen Zeilenumbruch
int number = 5;
int another_number = 3;
printf("Der Wert von number ist %d.\n", number); // %d wird mit dem Wert von number ersetzt
printf("Ausgabe von zwei Variablen: %d und %d\n", number, another_number);
```

#### Beispielcode zu `std::cout`:

```C++
#include <iostream>

...

std::cout << "Diese Zeile Code erzeugt eine Textausgabe ohne Zeilenumbruch";
std::cout << "Diese Zeile Code erzeugt eine Textausgabe mit Zeilenumbruch" << std::endl;
int number = 5;
std::cout << "Der Wert von number ist " << number "." << std::endl;
int another_number = 3;
std::cout <<  "Ausgabe von zwei Variablen: " << number << " und " << another_number << std::endl;
```

### Texteingabe

Nutzereingaben können Sie mittels `scanf`oder `std::cin` einlesen.

#### Beispielcode zu `scanf`:

```C++
int number = 0;
printf("Bitte geben Sie eine Zahl zwischen 1 und 3 ein: ");
scanf("%d", &number); // Achtung: & vor Variable nicht vergessen!
printf("Sie haben %d eingegeben.\n", number);
```

#### Beispielcode zu `std::cin`:


```C++
int number = 0;
std::cout << "Bitte geben Sie eine Zahl zwischen 1 und 3 ein: ";
std::cin >> number;
std::cout << "Sie haben " << number << " eingegeben." << std::endl;
```

### Zufallszahlen

Um sogenannte Pseudozufallszahlen in C/C++ zu generieren, können Sie die Funktion `rand` nutzen.
Die Funktion liefert eine zufällige Zahl zwischen 0 und `RAND_MAX` zurück, wobei `RAND_MAX` typischerweise `` entspricht.
Um nun z.B. eine Zufallszahl zwischen 1 und 6 zu erzeugen, berechnet man mit Hilfe des sog. Modulooperators den Rest der Division durch 6:

```C++
int random_number = rand(); // Liefert eine Zufallszahl zwischen 0 und RAND_MAX
random_number = random_number % 6; // Liefert den Rest der Division von random_number durch 6, d.h. 
                                   //  eine Zahl zwischen 0 und 5
random_number = random_number + 1; // Addiert eins und somit eine Zufallszahl zwischen 1 und 6
```

In einer Zeile zusammengefasst:

```C++
int random_number = rand() & 6 + 1; // Zufallszahl zwischen 1 und 6
```

Die von `rand()` zurückgelieferten Zufallszahlen nennt man Pseudozufallszahlen, da diese ausgehend von einem sog. *Seed* reproduzierbar nach einer Rechenvorschrift erzeugt werden.
Das heißt, dass bei gleichem Seed immer die gleiche Folge an "zufälligen" Zahlen erzeugt wird.
Der Seed kann mit Hilfe der funktion `srand` gesetzt werden:

```C++
srand(42); // Setzt den Seed auf 42
```

Damit würde aber bei der Programmausführung immer die gleiche Folge an Zufallszahlen erzeugt werden.
Um nun etwas mehr Zufall ins Spiel zu bringen, sollte man den Seed mit einer "zufälligen" Zahl initialisieren.
Hierfür verwendet man in C++ häufig die seit 1.1.1970 vergangenen Sekunden, die man mit `time(nullptr)` erhält.
Zusammengesetzt lautet dann der Befehl:

```C++
srand(time(nullptr));
```

Dieser Befehl sollte einmal zu Beginn Ihres Programms aufgerufen werden. 

Für diesen Befehl müssen Sie noch folgende zwei Systemheader inkludieren:

```C++
#include <cstdlib>
#include <ctime>
```

Nutzen Sie diese Art der Zufallsgenerierung, um sowohl Zahlen für die Rechenoperationen zu erzeugen, als auch zwischen der Rechenoperation Plus und Minus zufällig auszuwählen.

