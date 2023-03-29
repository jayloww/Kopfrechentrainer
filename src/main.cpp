#include <iostream>

int main()
{
    std::cout << "***************************************" << std::endl;
    std::cout << "* Willkommen beim Kopfrechentraining. *" << std::endl;
    std::cout << "***************************************\n" << std::endl;
    int number = 0;
    while(true){
    std::cout << "Hauptmenü" << std::endl;
    std::cout << "=========\n" << std::endl;

    std::cout << "1) Einmaleins" << std::endl;
    std::cout << "2) Plus/Minus" << std::endl;
    std::cout << "3) Quadratzahlen" << std::endl;
    std::cout << "4) Spiel verlassen\n" << std::endl;

    std::cout << "Was wollen sie üben ?" << std::endl;
    std::cin >> number;
    switch(number){
        case 1:
        std::cout << "Einmaleins" << std::endl;
        break;
        
        case 2:
        std::cout << "Plus/Minus" << std::endl;
        break;

        case 3:
        std::cout << "Quadratzahlen" << std::endl;
        break;

        case 4:
        std::cout << "Sie haben das spiel beendet" << std::endl;
        return 0;
        break;

        default:
        std::cout << "Bitte geben Sie eine Zahl zwischen 1 und 4 ein: ";
        break;
    }
    }
}
