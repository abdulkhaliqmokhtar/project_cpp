#include <iostream>

int main ()
{
    std::cout << "Enter an integer: ";          // prompt user for the first number

    int firstNum {};            // declare the first integer input by user as variable firstNum
    std::cin >> firstNum;       // get first integer value from user

    std::cout << "Enter another integer: ";     // prompt user for the second number

    int secondNum {};           // declare the second integer input by user as variable secondNum
    std::cin >> secondNum;      // get second integer value from user

    // use an expression to add firstNum and secondNum at the point where we are going to print it
    std::cout << firstNum << " + " << secondNum << " is " << firstNum + secondNum << ".\n";

    // use an expression to subtract firstNum and secondNum at the point where we are going to print it
    std::cout << firstNum << " - " << secondNum << " is " << firstNum - secondNum << ".\n";

    return 0;
}