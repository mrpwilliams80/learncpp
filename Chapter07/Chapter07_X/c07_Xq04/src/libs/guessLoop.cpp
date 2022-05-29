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
 * @brief   get a guess from the user
 * 
 * @param count number of guesses the user has had so far
 * @return int guess from user
 */
int getGuess(int count)
{
    std::cout << "Guess #" << count << ": ";
    int i;
    std::cin >> i;
    return i;
}