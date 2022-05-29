/**
 * @file    c07_xq03.cpp
 * @author  P. Williams (mrpwilliams80@gmail.com)
 * @brief   Implement a game of hi-lo. First, your program should pick a random 
 *          integer between 1 and 100. The user is given 7 tries to guess the 
 *          number.
 *          If the user does not guess the correct number, the program should 
 *          tell them whether they guessed too high or too low. If the user 
 *          guesses the right number, the program should tell them they won. If 
 *          they run out of guesses, the program should tell them they lost, and 
 *          what the correct number is. At the end of the game, the user should 
 *          be asked if they want to play again. If the user doesn’t enter ‘y’ 
 *          or ‘n’, ask them again.
 *          For this quiz, assume the user enters a valid number. Use a Mersenne 
 *          Twister PRNG, and seed it using a std::seed_seq with 8 results from 
 *          std::random_device.
 * @version 0.1.0
 * @date    2022-05-28
 */

#include "../hdrs/master.hpp"

int main ()
{
    std::cout << getRand() << '\n';
    
    return 0;
}
