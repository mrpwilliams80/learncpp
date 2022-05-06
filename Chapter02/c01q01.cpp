/**
 * @file    c01q01.cpp
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
 * @version 0.2.0
 * @date    2022-05-06
 */

#include <iostream>

int readNumber ()
{
    std::cout << "Please enter a number: ";
    int x {};
    std::cin >> x;
    return x;
}

int main()
{
    // code here

    return 0;
}