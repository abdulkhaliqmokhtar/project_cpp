#include <iostream>

int getYearFromUser()
{
    std::cout << "Enter a year: ";

    int yearFromUser{};
    std::cin >> yearFromUser;

    return yearFromUser;
}

int main()
{
    int year {getYearFromUser()};

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                std::cout << year << " is a leap year!" << '\n';
            }
            else
            {
                std::cout << year << " is not a leap year." << '\n';
            }
        }
        else
        {
            std::cout << year << " is a leap year!" << '\n';
        }
    }
    else
    {
        std::cout << year << " is not a leap year." << '\n';
    }

    return 0;
}