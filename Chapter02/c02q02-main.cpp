/**
 * @file    c02q02-main.cpp
 * @author  P. Williams <mrpwilliams80@gmail.com>
 * @brief   Modify the program you wrote in exercise #1 so that readNumber() and 
 *          writeAnswer() live in a separate file called. Use a forward 
 *          declaration to access them from main().
 * @version 0.1.0
 * @date    2022-05-06
 */

#include <iostream>

/**
 * @brief   prompt user for number and return that number
 * 
 * @return int the number entered by user
 */
int readNumber ()
{
    std::cout << "Please enter a number: ";
    int x {};
    std::cin >> x;
    return x;
}

/**
 * @brief   prints a message a to the screen; assumes paramiter is the answer to 
 *          a sum
 * 
 * @param ans the answer to the sum to include in the message
 */
void writeAnswer(int ans)
{
    std::cout << "The sum of both numbers is: " << ans << "\n";
}

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