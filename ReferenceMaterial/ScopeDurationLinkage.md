# Scope, Duration & Linkage

## Scope

An identifier’s scope determines where the identifier can be accessed within the source code.

Variables with **block (local) scope** can only be accessed within the block in which they are declared (including nested blocks). This includes:
- Local variables
- Function parameters
- User-defined type definitions (such as enums and classes) declared inside a block

Variables and functions with **file (global) scope** can be accessed from the point of declaration until the end of the file. This includes:
- Global variables
- Functions
- User-defined type definitions (such as enums and classes) declared inside a namespace or in the global scope

## Duration

A variable’s duration determines when it is created and destroyed; lifetime is the time between creation and destruction.

Variables with **automatic duration** are created at the point of definition, and destroyed when the block they are part of is exited. This includes:
- Local variables
- Function parameters

Variables with **static duration** are created when the program begins and destroyed when the program ends. This includes:
- Global variables
- Static local variables

Variables with **dynamic duration** are created and destroyed by programmer request. This includes:
- Dynamically allocated variables

## Linkage

An identifier’s linkage determines whether multiple declarations of an identifier refer to the same identifier or not.

An identifier with **no linkage** means the identifier only refers to itself. This includes:
- Local variables
- User-defined type definitions (such as enums and classes) declared inside a block

An identifier with **internal linkage** can be accessed anywhere within the file it is declared. This includes:
- Static global variables (initialized or uninitialized)
- Static functions
- Const global variables
- Functions declared inside an unnamed namespace
- User-defined type definitions (such as enums and classes) declared inside an unnamed namespace

An identifier with **external linkage** can be accessed anywhere within the file it is declared, or other files (via a forward declaration). This includes:
- Functions
- Non-const global variables (initialized or uninitialized)
- Extern const global variables
- Inline const global variables
- User-defined type definitions (such as enums and classes) declared inside a namespace or in the global scope

*__NOTE__: Identifiers with external linkage will generally cause a duplicate definition linker error if the definitions are compiled into more than one .cpp file (due to violating the one-definition rule). There are some exceptions to this rule (for types, templates, and inline functions and variables) -- we’ll cover these further in future lessons when we talk about those topics. Also, functions have external linkage by default. They can be made internal by using the static keyword.*

## Variable scope, duration, and linkage summary

| Type                                  | Example                           | Scope | Duration  | Linkage   | Notes |
|:----                                  |:-------                           |:----- |:--------  |:-------   |:----- |
| Local variable                        | int x;	                        | Block | Automatic | None      |       |
| Static local variable                 | static int s_x;                   | Block | Static    | None      |	    |
| Dynamic variable                      | int *x { new int{} };             | Block | Dynamic   | None      |       |
| Function parameter	                | void foo(int x)                   | Block	| Automatic	| None      |       |
| External non-constant global variable | int g_x;                          | File	| Static	| External	| Initialized or uninitialized |
| Internal non-constant global variable	| static int g_x;	                | File	| Static	| Internal	| Initialized or uninitialized |
| Internal constant global variable	    | constexpr int g_x { 1 };          | File	|Static     | Internal  | Must be initialized |
| External constant global variable     | extern const int g_x { 1 };       | File	| Static	| External	| Must be initialized |
| Inline constant global variable	    | inline constexpr int g_x { 1 };   | File	|Static	    |External	| Must be initialized |

## Forward declaration summary

| Type                                      | Example                   | Notes |
|:----                                      |:-------                   |:----- |
| Function forward declaration              | void foo(int x);          | Prototype only, no function body |
| Non-constant variable forward declaration | extern int g_x;           | Must be uninitialized |
| Const variable forward declaration        | extern const int g_x;     | Must be uninitialized |
| Constexpr variable forward declaration    | extern constexpr int g_x; | Not allowed, constexpr cannot be forward declared |

## Storage class specifiers

| Specifier     | Meaning                                                                   | Note  |
|:---------     |:-------                                                                   |:----  |
| extern        | static (or thread_local) storage duration and external linkage            |	
| static        | static (or thread_local) storage duration and internal linkage            |	
| thread_local  | thread storage duration                                                   | Introduced in C++11
| mutable       | object allowed to be modified even if containing class is const           |	
| auto          | automatic storage duration                                                | Deprecated in C++11
| register      |automatic storage duration and hint to the compiler to place in a register | Deprecated in C++17

---

#### About
reproduced from freely available material at [learncpp.com](https://www.learncpp.com/cpp-tutorial/scope-duration-and-linkage-summary/) for use as personal reference material. learncpp.com is authored by 'Alex' & 'Nascardriver', with contributions from ['Cosmin James'](https://github.com/cppjames) & all of the readers who have provided feedback. The content does not appear to be licenced but they kindly request donations via [PayPal](https://www.paypal.com/webapps/shoppingcart?flowlogging_id=f361001c74732&mfid=1652086716151_f361001c74732#/checkout/openButton) to cover "web hosting fees (currently about $800/yr) and help keep the site free for everybody" <a href="#footnote1"><sup>1</sup></a>.

---

##### Footnotes

<sup id="footnote1">1</sup> learncpp (2022), About / Contact / Support LearnCpp.Com. Available at: https://www.learncpp.com/about (Accessed: 09 May 2022).