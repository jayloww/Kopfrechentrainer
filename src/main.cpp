#include <iostream>
#include <ctime>
#include <cstdlib>

enum class Option
{
    EINMALEINS = 1,
    PLUS_MINUS = 2,
    QUADRATZAHLEN = 3,
    BEENDEN = 4,
};

void printWelcomeMessage()
{
    std::cout << "***************************************\n";
    std::cout << "* Willkommen beim Kopfrechentraining. *\n";
    std::cout << "***************************************\n\n";
}

Option showMainMenu()
{
    int number = 0;

    std::cout << "Hauptmenü\n=========\n\n";

    std::cout << "1) Einmaleins\n";
    std::cout << "2) Plus/Minus\n";
    std::cout << "3) Quadratzahlen\n";
    std::cout << "4) Spiel verlassen\n\n";

    std::cout << "Was wollen sie üben ? ";
    std::cin >> number;
    std::cout << "\n";

    return static_cast<Option>(number);
}

int einmaleins()
{
    std::cout << "***************************************\n";
    std::cout << "* Willkommen beim Einmaleinstraining. *\n";
    std::cout << "***************************************\n\n";
    int score = 0;
    while (true)
    {
        int answer = 0;
        int random_num1 = std::rand() % 10 + 1;
        int random_num2 = std::rand() % 10 + 1;
        std::cout << "Wie viel ist " << random_num1 << " x " << random_num2 << "? ";
        std::cin >> answer;
        std::cout << "\n";
        if (answer != random_num1 * random_num2)
        {
            std::cout << "Das ist leider falsch. Sie haben " << score << " Fragen richtig beantwortet.\n\n";
            return score;
        }
        score += 1;
        std::cout << "Korrekt!! Richtig beantwortete Fragen: " << score << "\n";
    }
}

int plusMinus()
{
    std::cout << "***************************************\n";
    std::cout << "* Willkommen beim Plus/Minustraining. *\n";
    std::cout << "***************************************\n\n";
    while (true)
    {
        int answer = 0;
        int score = 0;
        int random_num1 = std::rand() % 10 + 1;
        int random_num2 = std::rand() % 10 + 1;
        bool plus_minus = std::rand() % 2 == 0;
        if (plus_minus)
        {
            std::cout << "Wie viel ist " << random_num1 << " + " << random_num2 << "? ";
            std::cin >> answer;
            std::cout << "\n";
            if (answer != random_num1 + random_num2)
            {
                std::cout << "Das ist leider falsch. Sie haben " << score << " Fragen richtig beantwortet.\n\n";
                return score;
            }
            score += 1;
            std::cout << "Korrekt!! Richtig beantwortete Fragen: " << score << "\n";
        }
        else
        {
            std::cout << "Wie viel ist " << random_num1 << " - " << random_num2 << "? ";
            std::cin >> answer;
            std::cout << "\n";
            if (answer != random_num1 + random_num2)
            {
                std::cout << "Das ist leider falsch. Sie haben " << score << " Fragen richtig beantwortet.\n\n";
                return score;
            }
            score += 1;
            std::cout << "Korrekt!! Richtig beantwortete Fragen: " << score << "\n";
        }
    }
}

int quadratzahlen()
{
    std::cout << "***************************************\n";
    std::cout << "* Willkommen beim Quadratzahlentraining. *\n";
    std::cout << "***************************************\n\n";
    while (true)
    {
        int answer = 0;
        int score = 0;
        int random_num = rand() % 10 + 1;
        std::cout << "Wie viel ist " << random_num << " x " << random_num << "? ";
        std::cin >> answer;
        std::cout << "\n";
        if (answer != random_num * random_num)
        {
            std::cout << "Das ist leider falsch. Sie haben " << score << " Fragen richtig beantwortet.\n\n";
            return score;
        }
        score += 1;
        std::cout << "Korrekt!! Richtig beantwortete Fragen: " << score << "\n";
    }
}

int main()
{
    srand(time(nullptr));
    printWelcomeMessage();

    int total_score = 0;

    while (true)
    {
        std::cout << "Ihre Gesamtpunktzahl beträgt: " << total_score << " Punkte\n\n";

        Option selected_option = showMainMenu();

        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(1000, '\n');
        }

        int score = 0;
        bool keep_playing = true;
        switch (selected_option)
        {
        case Option::EINMALEINS:
            total_score += einmaleins();
            break;

        case Option::PLUS_MINUS:
            total_score += plusMinus();
            break;

        case Option::QUADRATZAHLEN:
            total_score += quadratzahlen();
            break;

        case Option::BEENDEN:
            std::cout << "Sie haben insgesamt " << total_score << " Punkte erreicht.\n";
            return 0;

        default:
            std::cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n";
            std::cout << "Fehler! Bitte geben Sie eine Zahl zwischen 1 und 4 ein! \n";
            std::cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\n";
            break;
        }
    }
}
