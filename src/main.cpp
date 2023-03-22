#include <iostream>

int main()
{
    std::cout << "***************************************" << std::endl;
    std::cout << "* Willkommen beim Kopfrechentraining. *" << std::endl;
    std::cout << "***************************************\n" << std::endl;

    int number = 0;
    std::cout << "Bitte geben Sie eine Zahl zwischen 1 und 3 ein: ";
    std::cin >> number;
    std::cout << "Sie haben " << number << " eingegeben." << std::endl;

    return 0;
}
