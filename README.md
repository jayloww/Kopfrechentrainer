# Kopfrechentrainer

## Die Idee

Ihr kleiner Bruder hat Sie gebeten Ihn beim Kopfrechentraining zu unterstützen. 
Als Programmierer entscheiden Sie sich, ihm hierfür ein einfaches Programm zu schreiben, dass ihm erlaubt das Einmaleins, Plus/Minusrechnen sowie Quadratzahlen bis 10 zu üben. 

## Anforderungen

Sie formulieren für Ihr Programm folgende Anforderungen:

* Spieler sollen im Hauptmenü wählen können, ob sie die Rechenart Plus/Minus, Quadratzahlen bis 10 oder das Einmaleins trainieren wollen.
* Das Hauptmenü soll eine Option bieten, den Kopfrechentrainer zu verlassen.
* Nach Auswahl der Rechenart soll der Spieler so lange Rechenaufgaben zum Thema beantworten, bis eine Eingabe falsch ist.
* Gibt der Spieler ein falsches Ergebnis ein, kehrt das Spiel zum Hauptmenü zurück.
* Für jede Rechenart gibt es einen Zähler, der die korrekt beantworteten Fragen zählt. 
* Der Gesamtpunktezähler im Hauptprogramm summiert die Anzahl aller korrekt beantworteten Fragen auf.
* Der Gesamtpunktezählerstand wird immer zusammen mit dem Hauptmenü und bei Verlassen des Spiels ausgegeben.

## Typischer Spielverlauf / User Interface

Auf Basis der Anforderungen definieren Sie, wie ein typischer Spielverlauf aussehen könnte:

```text
***************************************
* Willkommen beim Kopfrechentraining. *
***************************************

Ihre Gesamtpunktzahl beträgt: 0 Punkte

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
Korrekt! Richtig beantwortete Fragen: 1
Wie viel ist 4 x 7? 28
Korrekt! Richtig beantwortete Fragen: 2
Wie viel ist 6 x 8? 0
Das ist leider falsch. Sie haben 2 Fragen richtig beantwortet.

Ihre Gesamtpunktzahl beträgt: 2 Punkte

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
Korrekt! Richtig beantwortete Fragen: 1
Wie viel ist 8 - 9? -1
Korrekt! Richtig beantwortete Fragen: 2
Wie viel ist 5 - 10? -5
Korrekt! Richtig beantwortete Fragen: 3
Wie viel ist 9 + 7? 0
Das ist leider falsch. Sie haben 3 Fragen richtig beantwortet.

Ihre Gesamtpunktzahl beträgt: 5 Punkte

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
Korrekt! Richtig beantwortete Fragen: 1
Wie viel ist 9 x 9? 81
Korrekt! Richtig beantwortete Fragen: 2
Wie viel ist 7 x 7? 49
Korrekt! Richtig beantwortete Fragen: 3
Wie viel ist 8 x 8? 0
Das ist leider falsch. Sie haben 3 Fragen richtig beantwortet.

Ihre Gesamtpunktzahl beträgt: 8 Punkte

Hauptmenu    
=========

1) Einmaleins
2) Plus/Minus
3) Quadratzahlen
4) Spiel verlassen

Was wollen Sie ueben?
4
Sie haben insgesamt 8 Punkte erreicht.
```

## Aufgabe

Setzen Sie den Kopfrechentrainer in der Datei `src/main.cpp` wie beschrieben um. 
Nutzen Sie hierfür die im Folgenden gegebenen Hilfestellungen.

## Hilfestellungen

Für die Lösung dieser Aufgabe benötigten Sie die in der Vorlesung kennengelernten Sprachelemente.
Weitere Hilfestellungen finden Sie in diesem Abschnitt.

### Empfohlene Vorgehensweise

1) Implementieren Sie in der `main`-Funktion die Ausgabe des Hauptmenüs wie angegeben.
1) Schaffen Sie nun die Möglichkeit für den Spieler, einen Menüpunkt auszuwählen.
   Verwenden Sie für die Auswahl ein `switch`-Statement.
1) Implementieren Sie nun einzelne Dummy-Funktionen `Einmaleins`, `Quadratzahlen` und `Plusminus`.
   Überlegen Sie sich hierfür, ob die Funktionen eventuell Übergabeparameter benötigen und was die Funktionen zurückliefern sollten. Die Dummy-Funktionen sollen beim Aufruf zunächst nur eine einfache Ausgabe liefern.
1) Erweitern Sie das Hauptprogramm nun so, dass die Funktionen bei entsprechender Nutzereingabe aufgerufen werden.
1) Implementieren Sie nun die einzelnen Rechenübungen.
1) Erweitern Sie ihr Programm nun mit dem Gesamtpunktezähler einschließlich Ausgabe.

### Textein- und Ausgabe

Für `std::cout` und `std::cin` müssen Sie die C++-Headerdatei `iostream` inkludieren:

```C++
#include <iostream>
```

#### Beispielcode zu `std::cout`:

```C++
std::cout << "Diese Zeile Code erzeugt eine Textausgabe ohne Zeilenumbruch";
std::cout << "Diese Zeile Code erzeugt eine Textausgabe mit Zeilenumbruch" << std::endl;
int number = 5;
std::cout << "Der Wert von number ist " << number "." << std::endl;
int another_number = 3;
std::cout <<  "Ausgabe von zwei Variablen: " << number << " und " << another_number << std::endl;
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
Die Funktion liefert eine zufällige Zahl zwischen 0 und `RAND_MAX` zurück, wobei `RAND_MAX` typischerweise dem Wert $`2^{32-1}=2147483648`$ entspricht.

Um nun z.B. eine Zufallszahl zwischen 1 und 6 zu erzeugen, berechnet man mit Hilfe des sog. Modulo-Operators den Rest der Division durch 6 und addiert 1:

```C++
int random_number = rand();        // Liefert eine Zufallszahl zwischen 0 und RAND_MAX
random_number = random_number % 6; // Liefert den Rest der Division von random_number durch 6, d.h. 
                                   // eine Zahl zwischen 0 und 5
random_number = random_number + 1; // Addiert eins. Somit erhält man eine Zufallszahl zwischen 1 und 6
```

In einer Zeile zusammengefasst:

```C++
int random_number = rand() & 6 + 1; // Zufallszahl zwischen 1 und 6
```

Die von `rand()` zurückgelieferten Zufallszahlen nennt man Pseudozufallszahlen, da diese ausgehend von einem sog. *Seed* reproduzierbar nach einer Rechenvorschrift erzeugt werden.
Das heißt, dass bei gleichem Seed immer die gleiche Folge an "zufälligen" Zahlen erzeugt wird.
Der Seed kann mit Hilfe der Funktion `srand` gesetzt werden:

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

Für diesen Befehl müssen Sie noch folgende zwei System-Headerdateien inkludieren:

```C++
#include <cstdlib>
#include <ctime>
```

Nutzen Sie diese Art der Zufallsgenerierung, um sowohl Zahlen für die Rechenoperationen zu erzeugen, als auch zwischen der Rechenoperation Plus und Minus zufällig auszuwählen.
