/**
 * @file    c07_07q02.cpp
 * @author  P. Williams <mrpwilliams80@gmail.com>
 * @brief   Write a program that prints out the letters a through z along with 
 *          their ASCII codes
 * @version 0.1.1
 * @date    2022-05-15
 */

#include <iostream>

int main ()
{
  char c {'a'};
  while (c <= 'z')
  {
    std::cout << c << " : " << static_cast <int>(c) << '\n';
    c++;
  }
  
  return 0;
}