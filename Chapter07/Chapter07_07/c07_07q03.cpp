/**
 * @file    c07_07q03.cpp
 * @author  P. Williams <mrpwilliams80@gmail.com>
 * @brief   Invert the nested loops example so it prints the following:
 *          5 4 3 2 1
 *          4 3 2 1
 *          3 2 1
 *          2 1
 *          1
 * @version 0.1.1
 * @date    2022-05-15
 */
#include <iostream>

int main ()
{
    int x {5};
    while (x > 0)
    {
        int y {x};
        while (y > 0)
            {
                std::cout << y << ' ';
                --y;
            }
        std::cout << '\n';
        --x;
    }
  
  return 0;
}