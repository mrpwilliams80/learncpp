#include "../hdrs/master.hpp"

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