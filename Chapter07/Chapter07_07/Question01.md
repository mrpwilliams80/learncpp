# Chapter 07.07
## Question 01

### In the below program, why is variable inner declared inside the while block instead of immediately following the declaration of outer?

```cpp
#include <iostream>

// Loop between 1 and 5
int main()
{
    int outer{ 1 };
    while (outer <= 5)
    {
        // loop between 1 and outer
        int inner{ 1 };
        while (inner <= outer)
        {
            std::cout << inner << ' ';
            ++inner;
        }

        // print a newline at the end of each row
        std::cout << '\n';
        ++outer;
    }

    return 0;
}
```

<br>

### ANSWER

The variable needs to be reinitialised to re-start the count for the inner loop from the beginning for each iteration of the outter loop.

<br>

### SOLUTION
[@learncpp.com](https://www.learncpp.com/cpp-tutorial/intro-to-loops-and-while-statements#cpp_solution_id_0)