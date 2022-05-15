/**
 * @file    c07_07q02.cpp
 * @author  P. Williams <mrpwilliams80@gmail.com>
 * @brief   Write a program that prints out the letters a through z along with 
 *          their ASCII codes
 * @version 0.2.1
 * @date    2022-05-15
 */

#include <iostream>

int main ()
{
  char c {'a'};
  int colCount {0};

  while (c <= 'z')
  {
    std::cout << c << " : " << static_cast <int>(c) << "\t\t";
    c++;
    ++colCount;
    if (colCount % 3 == 0)
    {
        std::cout << '\n';
    }
  }

  std::cout << '\n';
  
  return 0;
}