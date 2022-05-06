/**
 * @file    c02q01.cpp
 * @author  P. Williams <mrpwilliams80@gmail.com>
 * @brief   Write a single-file program (named main.cpp) that reads two separate 
 *          integers from the user, adds them together, and then outputs the 
 *          answer.
 *          The program should use three functions:
 *          - A function named “readNumber” should be used to get (and return) a 
 *          single integer from the user.
 *          - A function named “writeAnswer” should be used to output the 
 *          answer. This function should take a single parameter and have no 
 *          return value.
 *          - A main() function should be used to glue the above functions 
 *          together.
 * @version 0.4.2
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