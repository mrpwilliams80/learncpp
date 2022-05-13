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
 * @version 0.3.0
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

/**
 * @brief   Get a character from the user
 * 
 * @return char the char entered by the user
 */
char getOperation()
{
    std::cout   << "Enter a character to perform a mathamatical operation -\n"
                << "+, -, *, /, or % (modulus): ";
    char op {};
    std::cin >> op;
    return op;
}

int calculate (int x, int y, char op)
{
    switch (op)
    {
        case '+':
            return (x + y);
            break;
        case '-':
            return (x - y);
            break;
        case '*':
            return (x * y);
        case '/':
            return (x / y);
        case '%':
            return (x % y);
        default:
            std::cout << "ERROR: invalid operation selected!";
            return 0;
    }
}

int main ()
{
    //code

    return 0;
}