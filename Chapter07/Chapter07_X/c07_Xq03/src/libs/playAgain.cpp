#include "../hdrs/master.hpp"

/**
 * @brief   Ask user if they wish to play again; test answer is valid
 * 
 * @return true if user responds 'y'
 * @return false if user responds 'n'
 */
bool playAgain()
{
    while (true)
    {
        std::cout << "Would you like to play again (y/n)? ";
        char ans;
        std::cin >> ans;
        if (ans == 'y')
        {
            return true;
        }
        if (ans == 'n')
        {
            return false;
        }
    }
}