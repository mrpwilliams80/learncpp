/**
 * @file    c02q03-main.cpp
 * @author  P. Williams <mrpwilliams80@gmail.com>
 * @brief   Modify the program you wrote in #2 so that it uses a header file to 
 *          access the functions instead of using forward declarations directly 
 *          in your code (.cpp) files. Make sure your header file uses header 
 *          guards.
 * @version 0.1.0
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
