#include <iostream>

// create a function to prompt user for a year
int getYearFromUser()
{
    std::cout << "Enter a year: ";

    int yearFromUser{};
    std::cin >> yearFromUser;

    return yearFromUser;
}

int main()
{
    // call getYearFromUser function
    int year {getYearFromUser()};

    // not a leap year if not divisible by 4
    if (year % 4 == 0)
    {
        // leap year if not divisible by 100 but divisible by 4
        if (year % 100 == 0)
        {
            // leap year if perfectly divisible by 400
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