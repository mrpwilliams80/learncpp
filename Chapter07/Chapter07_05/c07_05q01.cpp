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
 * @version 0.4.5
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
char getOperator()
{
    std::cout   << "Enter a character to perform a mathamatical operation -\n"
                << "+, -, *, /, or % (modulus): ";
    char op {};
    std::cin >> op;
    return op;
}

/**
 * @brief   use char op to select and perform a mathamatical operation on int x 
 *          and int y
 * 
 * @param x first operand
 * @param y second operand
 * @param op character representing mathmtical operation (+, -, *, / or %)
 * @return int result of mathmatical operation
 */
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
            // /* Original */
            // std::cout << "ERROR: invalid operation selected!\n";

            /* Testing std::cerr, from solution */
            std::cerr << "ERROR: invalid operation selected!\n";
            /*result: no noticeable difference; prob better practice */

            return 0;
    }
}

int main ()
{
    /* Original */
    // get first operand
    int x {};
    x = getInt();

    // get second operand
    int y {};
    y = getInt();

    // get operator
    char op {};
    op = getOperator();

    // perform calculation
    int ans {};
    ans = calculate(x, y, op);
    std::cout << x << ' ' << op << ' ' << y << " = " << ans << '\n';

    // /* Testing Alternative */
    // std::cout << calculate(getInt(), getInt(), getOperator()) << '\n';
    /* performs in wrong order, reverse */

    // /* Testing Alternative */
    // int ans {calculate(getInt(), getInt(), getOperator())};
    // std::cout << ans << '\n';
    // /* Doesn't seem worth it. No detailed output; not easier to read */
  
    return 0;
}