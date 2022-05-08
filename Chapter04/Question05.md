# Chapter 04
## Question 05

### Find 3 issues (affecting 4 lines) in the following code.

<br>

```cpp
#include <cstdint>
#include <iostream>

int main()
{
  std::cout << "How old are you?\n";

  std::uint8_t age{};
  std::cin >> age;

  std::cout << "Allowed to drive a car in Texas [";

  if (age >= 16)
    std::cout << "x";
  else
    std::cout << " ";

  std::cout << "]\n";

  return 0;
}
```

<br>

### Sample output

```
How old are you?
6
Allowed to drive a car in Texas [ ]
How old are you?
19
Allowed to drive a car in Texas [x]
```

<br>

### ANSWER

Using `uint8_t` means the age is likely to be treated as a character, in ASCII printable characters start at a value of 32 thus the program always evaluates `(age >=16)` as true. If the size of the variable is truly important `int16_t` would be better, but I see no obvious reason not to simply use an `int`. That seems to fix the problem and resolve the output (except it doesn't actually run through twice on its own - but I don't think that is what is meant). I have no idea how this is 3 issues. It could maybe be said to effect 4 lines though.

<br>

### SOLUTION
[@learncpp.com](https://www.learncpp.com/cpp-tutorial/chapter-4-summary-and-quiz#cpp_solution_id_11)

<br>


*__NOTE:__ I was overly concerned with functionality and not best practice. As such, I missed the chars in double quotes. And, the fact, in this context, 16 is a magic number.*