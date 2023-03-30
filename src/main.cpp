#include <iostream>
#include <ctime>
#include <cstdlib>

void PrintWelcomeMessage(){
    std::cout << "\n***************************************" << std::endl;
    std::cout << "* Willkommen beim Kopfrechentraining. *" << std::endl;
    std::cout << "***************************************\n" << std::endl;
}

    enum class Option{
        EINMALEINS = 1,
        PLUS_MINUS = 2,
        QUADRATZAHLEN = 3,
        BEENDEN = 4,
    };

Option ShowMainMenu(){
    int number = 0;

    std::cout << "Hauptmenü" << std::endl;
    std::cout << "=========\n" << std::endl;

    std::cout << "1) Einmaleins" << std::endl;
    std::cout << "2) Plus/Minus" << std::endl;
    std::cout << "3) Quadratzahlen" << std::endl;
    std::cout << "4) Spiel verlassen\n" << std::endl;

    std::cout << "Was wollen sie üben ? ";
    std::cin >> number;
    return static_cast<Option>(number);
}


int main()
{
    srand(time(nullptr));
    PrintWelcomeMessage();

    int total_score = 0;

    while (true)
    {
        std::cout << "Ihre Gesamtpunktzahl beträgt: " << total_score << " Punkte\n" << std::endl;

        Option selected_option = ShowMainMenu();

        if (std::cin.fail())
        {
            // std::cout << "Failed: " << std::cin.fail() << "\n";
            std::cin.clear();
            std::cin.ignore(1000, '\n');
        }

        int score = 0;
        bool keep_playing = true;
        switch (selected_option)
        {
        case Option::EINMALEINS:
            std::cout << "\n***************************************" << std::endl;
            std::cout << "* Willkommen beim Einmaleinstraining. *" << std::endl;
            std::cout << "***************************************\n" << std::endl;
            while (keep_playing)
            {
                int answer = 0;
                int random_num1 = std::rand() % 10 + 1;
                int random_num2 = std::rand() % 10 + 1;
                std::cout << "Wie viel ist " << random_num1 << " x " << random_num2 << "? ";
                std::cin >> answer;
                if(answer != random_num1 * random_num2)
                {
                    std::cout << "\nDas ist leider falsch. Sie haben " << score << " Fragen richtig beantwortet.\n" << std::endl;
                    total_score += score;
                    keep_playing = false;
                    break;
                }
                score += 1;
                std::cout << "Korrekt!! Richtig beantwortete Fragen: " << score << std::endl;
            }
            break;

        case Option::PLUS_MINUS :
            std::cout << "\n***************************************" << std::endl;
            std::cout << "* Willkommen beim Plus/Minustraining. *" << std::endl;
            std::cout << "***************************************\n" << std::endl;
            while (keep_playing)
            {        
                int answer = 0;
                int random_num1 = std::rand() % 10 + 1;
                int random_num2 = std::rand() % 10 + 1;
                int plus_minus = std::rand() % 2 + 1;
                switch(plus_minus)
            {
                case 1:
                std::cout << "Wie viel ist " << random_num1 << " + " << random_num2 << "? ";
                std::cin >> answer;
                if(answer != random_num1 + random_num2)
                {
                    std::cout << "\nDas ist leider falsch. Sie haben " << score << " Fragen richtig beantwortet.\n" << std::endl;
                    total_score += score;
                    keep_playing = false;
                    break;
                }
                score += 1;
                std::cout << "Korrekt!! Richtig beantwortete Fragen: " << score << std::endl;
                break;
                
                case 2:
                std::cout << "Wie viel ist " << random_num1 << " - " << random_num2 << "? ";
                std::cin >> answer;
                if(answer != random_num1 - random_num2)
                {
                    std::cout << "\nDas ist leider falsch. Sie haben " << score << " Fragen richtig beantwortet.\n" << std::endl;
                    total_score += score;
                    keep_playing = false;
                    break;
                }
                score += 1;
                std::cout << "Korrekt!! Richtig beantwortete Fragen: " << score << std::endl;
                break;
            }
            }
            break;

        case Option::QUADRATZAHLEN:
            std::cout << "\n***************************************" << std::endl;
            std::cout << "* Willkommen beim Quadratzahlentraining. *" << std::endl;
            std::cout << "***************************************\n" << std::endl;
            while(true)
            {
                int answer = 0;
                int random_num = rand() % 10 + 1;
                std::cout << "Wie viel ist " << random_num << " x " << random_num << "? ";
                std::cin >> answer;
                if(answer != random_num * random_num)
                {
                    std::cout << "\nDas ist leider falsch. Sie haben " << score << " Fragen richtig beantwortet.\n" << std::endl;
                    total_score += score;
                    keep_playing = false;
                    break;
                }
                score += 1;
                std::cout << "Korrekt!! Richtig beantwortete Fragen: " << score << std::endl;
            }
            break;

        case Option::BEENDEN:
            std::cout << "Sie haben insgesamt " << total_score << " Punkte erreicht." << std::endl;
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
