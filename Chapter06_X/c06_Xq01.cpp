/**
 * @file    c06_xq01.cpp
 * @author  P. Williams <mrpwilliams80@gmail.com>
 * @brief   Fix the program
 * @version 0.1.2
 * @date    2022-05-12
 */
#include <iostream>

int main()
{
	std::cout << "Enter a positive number: ";
	int num{};
	std::cin >> num;


	if (num < 0)
    {   // start of new block
		std::cout << "Negative number entered.  Making positive.\n";
		num = -num;
    }   // end of new block

	std::cout << "You entered: " << num << '\n';    // + new line char

	return 0;
}