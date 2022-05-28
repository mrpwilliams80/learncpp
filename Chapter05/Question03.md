# Chapter 05
## Question 03

### Why should you never do the following:

---

#### a) int y{ foo(++x, x) };

### ANSWER

The expression assigns y to the result of a function & x is pre-incremented for the first parameter of the function foo. I think this may cause unexpected behaviour.

### SOLUTION
[@learncpp.com](https://www.learncpp.com/cpp-tutorial/chapter-5-summary-and-quiz#cpp_solution_id_6)

<br>

*__NOTE:__ More specifically, function foo() may evaluate parameters in either order and pre-incrementing x leaves x changed, thus we cannot be sure which values of x will be passed to foo()*

---

#### b) double x{ 0.1 + 0.1 + 0.1 }; return (x == 0.3);

### ANSWER

Floating point numbers are imprecise and may cause inconsistent and unwanted results when used in equality and inequality comparisons.

### SOLUTION
[@learncpp.com](https://www.learncpp.com/cpp-tutorial/chapter-5-summary-and-quiz#cpp_solution_id_7)

---

#### c) int x{ 3 / 0 };

### ANSWER

Even though some compilers now support division by zero, it should be avoided for compatibility to avoid undefined behaviour (likely a crash).

### SOLUTION
[@learncpp.com](https://www.learncpp.com/cpp-tutorial/chapter-5-summary-and-quiz#cpp_solution_id_8)

---