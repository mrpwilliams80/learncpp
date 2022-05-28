#include "../hdrs/master.hpp"

/**
 * @brief   test if integer x is a prime number (i.e. a natural number greater 
 *          than 1 that is evenly divisible only by 1 and itself)
 * 
 * @param x integer to test if prime
 * @return true if x is prime
 * @return false if x is not prime
 */
bool isPrime(int x)
{
    // test prime is greater than 1
    if (x < 2)
    {
        return false;
    }

    /* A non-prime number must have at least one divisor less than or equal to 
    its square root. std::sqrt(x) (in the <cmath> header) returns the square 
    root of x. */

    int intRoot = (int)std::sqrt(x);

    for (int y = 2; y < intRoot; ++y)
    {
        if (x % y == 0)
        {
            return false;
        }
    }

    return true;
}