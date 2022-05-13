/**
 * @file    c07_05q01.cpp
 * @author  P. Williams <mrpwilliams80@gmail.com>
 * @brief   Write a function called calculate() that takes two integers and a 
 *          char representing one of the following mathematical operations: +, 
 *          -, *, /, or % (modulus). Use a switch statement to perform the 
 *          appropriate mathematical operation on the integers, and return the 
 *          result. If an invalid operator is passed into the function, the 
 *          function should print an error. For the division operator, do an 
 *          integer division.
 * @version 0.1.1
 * @date    2022-05-13
 */

#include <iostream>

/**
 * @brief   Get an int value from the user
 * 
 * @return int the value entered by the user
 */
int getInt()
{
    std::cout << "Enter an integer: ";
    int number {};
    std::cin >> number;
    return number;
}

int main ()
{
    //code

    return 0;
}