/**
 * @file    c07_09q01.cpp
 * @author  P. Williams <mrpwilliams80@gmail.com>
 * @brief   Write a for loop that prints every even number from 0 to 20.
 * @version 0.1.1
 * @date    2022-05-15
 */
#include <iostream>

int main()
{
    // loop: evens 0-20 inc
    for (int x {0}; x <= 20; x += 2)
    {
        std::cout << x << '\n';
    }

    return 0;
}