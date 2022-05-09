# Chapter 06.x
## Question 01

### Fix the following program:

<br>

```cpp
#include <iostream>

int main()
{
	std::cout << "Enter a positive number: ";
	int num{};
	std::cin >> num;


	if (num < 0)
		std::cout << "Negative number entered.  Making positive.\n";
		num = -num;

	std::cout << "You entered: " << num;

	return 0;
}
```

<br>

### ANSWER

*Answer here...*

<br>

### SOLUTION
[@learncpp.com](https://www.learncpp.com/cpp-tutorial/chapter-6-summary-and-quiz#cpp_solution_id_0)