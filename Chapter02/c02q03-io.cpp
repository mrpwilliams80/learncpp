/**
 * @file    c02q03-io.cpp
 * @author  P. Williams <mrpwilliams80@gmail.com>
 * @brief   Modify the program you wrote in #2 so that it uses a header file to 
 *          access the functions instead of using forward declarations directly 
 *          in your code (.cpp) files. Make sure your header file uses header 
 *          guards.
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