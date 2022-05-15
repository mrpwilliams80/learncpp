/**
 * @file    c07_07q04.cpp
 * @author  P. Williams <mrpwilliams80@gmail.com>
 * @brief   Print this:
 *                  1
 *                2 1
 *              3 2 1
 *            4 3 2 1
 *          5 4 3 2 1
 * @version 0.1.1
 * @date    2022-05-15
 */
#include <iostream>

int main ()
{
    constexpr int MAX_VALUE {5};
    constexpr int MIN_VALUE {1};

    int lineCount {MAX_VALUE};
    int charValue {MIN_VALUE};

    while (lineCount >= MIN_VALUE)
    {
        int characterCount {MAX_VALUE};
        while (characterCount >= MIN_VALUE){
            if (characterCount > charValue )
            {
                std::cout << "  ";
                --characterCount;
            }
            else
            {
                std::cout << characterCount << ' ';
                --characterCount;
            }
                std::cout << '\n';
        }
        --lineCount;
        ++charValue;
        }
        return 0;
    }