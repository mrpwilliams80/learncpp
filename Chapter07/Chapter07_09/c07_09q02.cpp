/**
 * @file    c07_09q02.cpp
 * @author  P. Williams <mrpwilliams80@gmail.com>
 * @brief   Write a function named sumTo() that takes an integer parameter named 
 *          value, and returns the sum of all the numbers from 1 to value.
 *          For example, sumTo(5) should return 15, which is 1 + 2 + 3 + 4 + 5.
 * @version 0.2.0
 * @date    2022-05-15
 */
#include <iostream>

int sumTo(int max)
{
    int ans {0};
    for (int x {1}; x <= max; x++)
    {
        ans += x;
    }
    return ans;
}

int main ()
{
    // prompt
    std::cout << "Enter an integer: ";
    int num {};
    std::cin >> num;

    // output
    std::cout   << "The triangle number of " << num
                << " is " << sumTo(num) << '\n';

    return 0;
}