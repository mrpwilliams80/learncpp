/**
 * @file    c01q03.cpp
 * @author  P. Williams <mrpwilliams80@gmail.com>
 * @brief   Write a program that asks the user to enter a number, and then enter 
 *          a second number. The program should tell the user what the result of 
 *          adding and subtracting the two numbers is.
 * 
 *          The output of the program should match the following (assuming 
 *          inputs of 6 and 4):
 * 
 *          Enter an integer: 6
 *          Enter another integer: 4
 *          6 + 4 is 10.
 *          6 - 4 is 2.
 * @version 0.2.0
 * @date    2022-05-05
 */

#include <iostream>

int main()
{
    // get first value
    std::cout << "Enter an integer: ";
    int x {0};
    std::cin >> x;

    return 0;
}