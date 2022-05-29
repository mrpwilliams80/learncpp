/**
 * @file    c07_xq04.cpp
 * @author  P. Williams (mrpwilliams80@gmail.com)
 * @brief   Update c07_Xq03 to handle invalid input (e.g. ‘x’) or valid input 
 *          with extraneous characters (e.g. “43x”) when the user is guessing a 
 *          number.
 * @version 0.1.0
 * @date    2022-05-28
 */

#include "../hdrs/master.hpp"

int main ()
{
    constexpr int MAX_GUESSES = 7;

    while(true)
    {
        std::cout   << "Let's play a game. I'm thinking of a number. "
                    << "You have " << MAX_GUESSES 
                    << " tries to guess what it is.\n";
        
        guessLoop(MAX_GUESSES);

        if(!playAgain())
        {
            break;
        } 

    }

    std::cout << "Thank you for playing.\n";

    return 0;
}
