#include <iostream>

int main()
{
    std::cout << "Enter an integer: ";  // prompt user for a number

    int num{};              // declare the integer input by user as variable num
    std::cin >> num;        // get integer value from user's keyboard

    // use an expression to multiply num * 2 at the point where we are going to print it
    std::cout << "Double that number is: " << num * 2 << '\n';

    // use an expression to multiply num * 3 at the point where we are going to print it
    std::cout << "Triple that number is: " << num * 3 << '\n';

    return 0;
}