#include <iostream>

constexpr int MAX_VALUE {5};
constexpr int MIN_VALUE {1};

int main ()
{
  int lineCount {MAX_VALUE};
  int charValue {MIN_VALUE};
  
  while (lineCount >= MIN_VALUE)
  {
    // do each line iteration
    int charcterCount {MAX_VALUE};
    while (charcterCount >= MIN_VALUE){
      if (charcterCount > charValue )
      {
        std::cout << "  ";
        --characterCount;
      }
      else
      {
        std::cout << charcterCount << ' ';
        --characterCount;
      }
      std::cout << '/n';
    }
    --lineCount;
    ++charValue;
  }
  return 0
}