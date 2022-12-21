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

    // if year is divisible by 4 and not divisible by 100 or divisible by 400: leap year
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        std::cout << year << " is a leap year!" << '\n';
    }
    else
    {
        std::cout << year << " is not a leap year." << '\n';
    }

    return 0;
}