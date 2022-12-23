#include <iostream>
#include <cstdlib>  // for psuedorandom sequence generation: rand() and srand()

// randomNumberGenerator() will create random number on every program run
int randomNumberGenerator()
{
    /*
        srand() gives random function a new seed, a starting point;
        usually random numbers are calculated by taking the previous number (or the seed),
        and then do many operations on that number to generate the next
    */

   /*
        time (0) gives time in seconds since the Unix epoch (Jan 1, 1970 - 00:00:00),
        which is a pretty good "unpredictable" seed;
        you're guaranteed your seed will be the same only once,
        unless program is started multiple times within the same second
   */

    /*
        the idea behind this snip is the default seed value for the srand() function is 1,
        which introduce a problem: every time we run the program with seed value, output will remain the same,
        solution: use a fresh seed value each time we run the program

        What changes every second? Time. Therefore, we used the concept of the current timestamp being the current seed value
    */
    srand(time(0));

    // lb {} is lower bound and ub {} is upper bound
    int lb {0}, ub {100};

    // generate random number on every program run within range lb to ub
    int randomNumber = (rand() % (ub - lb + 1)) + lb;

    return randomNumber;
}

int main ()
{
    // prompt user with integer range
    std::cout << "Please enter an integer between 0 to 100: ";

    // initialize user input as integer and take their input
    int userNumber{};
    std::cin >> userNumber;

    // initialize random integer generated
    int correctNumber{randomNumberGenerator()};

    // create conditional statement
    if (userNumber > correctNumber)
    {
        std::cout << "Your integer is higher than the correct answer. Try again!" << '\n';
    }
    else if (userNumber < correctNumber)
    {
        std::cout << "Your integer is lower than the correct answer. Try again!" << '\n';
    }
    else
    {
        std::cout << "Yay, you guessed it correctly!" << '\n';
    }

    return 0;
}