# Chapter 06 Conclusion

Despite being able to answer the questions with relative ease, it would not be fair to say I have mastered this topic. There is a lot of terminology and I have neither remembered it nor, do I feel, fully understood it. Most specifically everything after the introduction of blocks, with the issue increasing in magnitude as the chapter progressed.

For now, I believe the best corse of action is to stick to 'best practices'. I can always return to the chapter, or seek out additional information, if a more in depth level of understanding proves desirous.

## Best Practices

- Keep the nesting level of your functions to 3 or less. If your function has a need for more nested levels, consider refactoring your function into sub-functions.
- Define variables in the most limited existing scope. Avoid creating new blocks whose only purpose is to limit the scope of variables.
- Consider using a “g” or “g_” prefix for global variables to help differentiate them from local variables.
- Avoid [variable shadowing](https://www.learncpp.com/cpp-tutorial/variable-shadowing-name-hiding/).
- Use local variables instead of global variables whenever possible.
- If you need global constants and your compiler is C++17 capable, prefer defining inline constexpr global variables in a header file.
- Initialize your static local variables. Static local variables are only initialized the first time the code is executed, not on subsequent calls.
- Avoid static local variables unless the variable never needs to be reset.
- Prefer explicit namespaces over using statements. Avoid using directives whenever possible. Using declarations are okay to use inside blocks.
- Do not use the inline keyword to request inline expansion for your functions.
- Avoid the use of the inline keyword for functions unless you have a specific, compelling reason to do so.
- Use a constexpr return type for functions that need to return a compile-time constant.
- Use consteval if you have a function that must run at compile-time for some reason (e.g. performance).