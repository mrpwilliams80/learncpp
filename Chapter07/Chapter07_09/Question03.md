# Chapter 07.09
## Question 03

### What’s wrong with the following for loop?

```cpp
// Print all numbers from 9 to 0
for (unsigned int count{ 9 }; count >= 0; --count)
    std::cout << count << ' ';
```

<br>

### ANSWER

Using an unsigned int means the test `count >= 0` will always be true. The variable will overflow but never become negative; thus the loop will count infinitely.

<br>

### SOLUTION
[@learncpp.com](https://www.learncpp.com/cpp-tutorial/for-statements#cpp_solution_id_1)