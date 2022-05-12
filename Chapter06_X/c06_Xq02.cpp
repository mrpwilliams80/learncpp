/**
 * @file    c06_Xq02.cpp
 * @author  P. Williams <mrpwilliams80@gmail.com>
 * @brief   Write a file named constants.h that makes the following program run. 
 *          If your compiler is C++17 capable, use inline constexpr variables. 
 *          Otherwise, use normal constexpr variables. max_class_size should be 
 *          35.
 * @version 0.1.1
 * @date    2022-05-12
 */

#include <iostream>
#include "c06_Xq02_constants.h"

int main()
{
	std::cout << "How many students are in your class? ";
	int students{};
	std::cin >> students;


	if (students > constants::max_class_size)
		std::cout << "There are too many students in this class";
	else
		std::cout << "This class isn't too large";

	return 0;
}