/**
 * @file    c02q02-main.cpp
 * @author  P. Williams <mrpwilliams80@gmail.com>
 * @brief   Modify the program you wrote in exercise #1 so that readNumber() and 
 *          writeAnswer() live in a separate file called. Use a forward 
 *          declaration to access them from main().
 * @version 0.1.2
 * @date    2022-05-06
 */

#include <iostream>

int readNumber ();
void writeAnswer(int ans);

/**
 * @brief   prompts user for two numbers and prints the sum of the numbers to 
 *          screen
 */
int main()
{
    int x {readNumber()};
    int y {readNumber()};
    writeAnswer(x + y);

    return 0;
}