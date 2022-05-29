#include "../hdrs/master.hpp"

/**
 * @brief   loop to iterate through user guesses
 * 
 */
void guessLoop(int maxGuesses)
{
    int num = getRand();
    int count = 0;

    while(true)
    {
        ++count;

        if (count > maxGuesses)
        {
            looseMsg(num);
            break;
        }

        int guess = getGuess(count);

        if (guess > num)
        {
            std::cout << "Your guess is too high.\n";
        }
        else if (guess < num)
        {
            std::cout << "Your guess is too low.\n";
        }
        else
        {
            std::cout << "Correct! You win!\n";
            break;
        }
    }
}

/**
 * @brief   notify user they failed to guess number num
 * 
 * @param num the number user was trying to guess
 */
void looseMsg(int num)
{
    std::cout << "Sorry, you lose. The correct number was " << num << '\n';
}

/**
 * @brief   get a guess from the user; check for valid input
 * 
 * @param count number of guesses the user has had so far
 * @return int guess from user
 */
int getGuess(int count)
{
    while (true)
    {
        std::cout << "Guess #" << count << ": ";
        int i {};
        std::cin >> i;

        // check for wrong input
        if (std::cin.fail())
        {
            // reset failed attempt
            std::cin.clear();
            // remove bad input
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            // error message
            std::cout << "Erroneous input, please try again...\n";
            continue;
        }

        // remove any potential extraneous input
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        return i;
    }
}