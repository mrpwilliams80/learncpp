# Chapter 04
## Question 01

### Why are symbolic constants usually a better choice than literal constants? Why are const/constexpr symbolic constants usually a better choice than #defined symbolic constants?

<br>

### ANSWER

Literal constants have no context (they are often referred to as magic numbers), this means when returning to code after some time or if code is being read by someone else it will be difficult or impossible to work out what the constant is for. Also, if the constant is used in more than one place any changes will need to be implemented for multiple instances.
Pre-processor #defined symbolic constants should be avoided as:
- The values will not appear in the debugger - only the name of the symbolic constant. This will make fixing errors more difficult.
- Macros can have naming conflicts with normal code.
- Macros don't follow normal scoping rules.

<br>

### SOLUTION
[@learncpp.com](https://www.learncpp.com/cpp-tutorial/chapter-4-summary-and-quiz#cpp_solution_id_0)