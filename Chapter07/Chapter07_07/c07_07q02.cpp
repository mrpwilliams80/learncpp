/* Write a program that prints out the letters a through z along with their ASCII ccodes */

#include <iostream>

int main ()
{
  char c {a};
  while (c <= 'z')
  {
    std::cout << c << " : " << static_cast<int> c << '/n';
    c++;
  }
  
  return 0;
}