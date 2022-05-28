# Chapter 03
## Question 01

### The following program is supposed to add two numbers, but doesn’t work correctly. Use the integrated debugger to step through this program and watch the value of x. Based on the information you learn, fix the following program:

<br>

```cpp
#include <iostream>

int readNumber(int x)
{
	std::cout << "Please enter a number: ";
	std::cin >> x;
	return x;
}

void writeAnswer(int x)
{
	std::cout << "The sum is: " << x << '\n';
}

int main()
{
	int x {};
	readNumber(x);
	x = x + readNumber(x);
	writeAnswer(x);

	return 0;
}
```

<br>

### ANSWER
The function read number does not need a parameter. Instead it should declare a variable to store the value obtained through `std::cin >> x;`. Then, in main, the result of readNumber() should be assigned to the variable x.

I realised this by looking directly at the code, before running the debugger. I shall try to avoid doing this for the next question. 

<br>

```cpp
#include <iostream>

int readNumber()
{
	std::cout << "Please enter a number: ";
    int x {};
	std::cin >> x;
	return x;
}

void writeAnswer(int x)
{
	std::cout << "The sum is: " << x << '\n';
}

int main()
{
	int x {};
	x = readNumber();
	x = x + readNumber();
	writeAnswer(x);

	return 0;
}
```

<br>

### SOLUTION
[@learncpp.com](https://www.learncpp.com/cpp-tutorial/chapter-3-summary-and-quiz#cpp_solution_id_0)