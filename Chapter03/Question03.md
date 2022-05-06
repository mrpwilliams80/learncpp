# Chapter 03
## Question 03

### What does the call stack look like in the following program when the point of execution is on line 4? Only the function names are needed for this exercise, not the line numbers indicating the point of return.

<br>

```cpp
#include <iostream>

void d()
{ // here
}

void c()
{
}

void b()
{
	c();
	d();
}

void a()
{
	b();
}

int main()
{
	a();

	return 0;
}
```

<br>

### ANSWER
The call stack looks as follows:

<br>

>d()
>
>b()
>
>a()
>
>main()

<br>

### SOLUTION
[@learncpp.com](https://www.learncpp.com/cpp-tutorial/chapter-3-summary-and-quiz#cpp_solution_id_1)