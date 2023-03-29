#include <iostream>

int main()
{
    std::cout << "***************************************" << std::endl;
    std::cout << "* Willkommen beim Kopfrechentraining. *" << std::endl;
    std::cout << "***************************************\n" << std::endl;

    int number = 0;
    int total_score = 0;

    while (true)
    {
        std::cout << "Ihre Gesamtpunktzahl beträgt: " << total_score << "Punkte" << std::endl;

        std::cout << "Hauptmenü" << std::endl;
        std::cout << "=========\n" << std::endl;

        std::cout << "1) Einmaleins" << std::endl;
        std::cout << "2) Plus/Minus" << std::endl;
        std::cout << "3) Quadratzahlen" << std::endl;
        std::cout << "4) Spiel verlassen\n" << std::endl;

        std::cout << "Was wollen sie üben ? ";
        std::cin >> number;

        if (std::cin.fail())
        {
            // std::cout << "Failed: " << std::cin.fail() << "\n";
            std::cin.clear();
            std::cin.ignore(1000, '\n');
        }

        switch (number)
        {
        case 1:
            std::cout << "***************************************" << std::endl;
            std::cout << "* Willkommen beim Einmaleinstraining. *" << std::endl;
            std::cout << "***************************************\n" << std::endl;
            
            int score = 0;
            while (true)
            {
                int answer = 0;
                int random_num1 = std::rand() % 9 + 1;
                int random_num2 = std::rand() % 9 + 1;
                std::cout << "Wie viel ist " << random_num1 << " x " << random_num2 << "? ";
                std::cin >> answer;
                if(answer != random_num1 * random_num2)
                {
                    std::cout << "Das ist leider falsch. Sie haben " << score << "Fragen richtig beantwortet.\n" << std::endl;
                    total_score += score;
                    break;
                }
                score = score + 1;
                std::cout << "Korrekt!! Richtig beantwortete Fragen: " << score << std::endl;
            }
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
            std::cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << std::endl;
            std::cout << "Fehler! Bitte geben Sie eine Zahl zwischen 1 und 4 ein! " << std::endl;
            std::cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n" << std::endl;
            break;
        }
    }
}
