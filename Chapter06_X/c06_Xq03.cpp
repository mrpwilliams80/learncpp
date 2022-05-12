/**
 * @file    c06_Xq03.cpp
 * @author  P. Williams <mrpwilliams80@gmail.com>
 * @brief   Complete the following program by writing the passOrFail() function, 
 *          which should return true for the first 3 calls, and false 
 *          thereafter. Do this without modifying the main() function.
 * @version 0.1.0
 * @date    2022-05-12
 */
#include <iostream>

int main()
{
	std::cout << "User #1: " << (passOrFail() ? "Pass\n" : "Fail\n");
	std::cout << "User #2: " << (passOrFail() ? "Pass\n" : "Fail\n");
	std::cout << "User #3: " << (passOrFail() ? "Pass\n" : "Fail\n");
	std::cout << "User #4: " << (passOrFail() ? "Pass\n" : "Fail\n");
	std::cout << "User #5: " << (passOrFail() ? "Pass\n" : "Fail\n");

	return 0;
}