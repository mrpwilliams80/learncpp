/**
 * @file    c04q03.cpp
 * @author  P. Williams <mrpwilliams80@gmail.com>
 * @brief   Write the following program: The user is asked to enter 2 floating 
 *          point numbers (use doubles). The user is then asked to enter one of 
 *          the following mathematical symbols: +, -, *, or /. The program 
 *          computes the answer on the two numbers the user entered and prints 
 *          the results. If the user enters an invalid symbol, the program 
 *          should print nothing. Example of program:
 * 
 *          Enter a double value: 6.2
 *          Enter a double value: 5
 *          Enter one of the following: +, -, *, or /: *
 *          6.2 * 5 is 31
 * @version 0.3.0
 * @date    2022-05-07
 */

#include <iostream>

double getNumber()
{
    double x {};
    std::cout << "Enter a double value: ";
    std::cin >> x;
    return x;
}

char getOperator()
{
    char c {};
    std::cout << "Enter one of the following: +, -, *, or /: ";
    std::cin >> c;
    return c;
}

int main ()
{
    // code

    return 0;
}