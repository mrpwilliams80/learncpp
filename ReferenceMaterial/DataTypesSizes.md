# Data Types and Sizes

C++ does not usually guarantee the size of a data type. Instead it has defined minimum sizes.


| Category          | Type          | Min Size  | Note  |
|:---------         |:-----         |:--------- |:----- |
| Boolean           | bool          | 1 byte    |       |
| Character         | char          | 1 byte    | Always exactly 1 byte |
|                   | wchar_t       | 1 byte    | Depreciated, win32 API |
|                   | char16_t      | 2 bytes   | Depreciated, win32 API |
|                   | char32_t      | 4 bytes   | Depreciated, win32 API |
| Integer           | short         | 2 bytes   |       |
|                   | int           | 2 bytes   | Typically 4 bytes on modern computers | 
|                   | long          | 4 bytes   |       |
|                   | long long     | 8 bytes   |       |
| floating point    | float         | 4 bytes   | Typically 4 bytes |
|                   | double        | 8 bytes   | Typically 8 bytes |
|                   | long double   | 8 bytes   | Typically 8, 12, or 16 bytes |

## Integer

the range of data an the above integers can store is dictated by the system allocated size rather than the type.

C++ has:
- `std::int8_t`
- `std::uint8_t`
- `std::int16_t`
- `std::uint16_t`
- `std::int32_t`
- `std::uint32_t`
- `std::int64_t`
- `std::uint64_t`

accessed through the `<cstdint>` header, for when an integer of a fixed size is needed.

| Size / Type           | Range         |
|:------------          |:------        |
| 1 bytes / signed      | -128 to 127   |
| 1 bytes / unsigned    | 0 to 255      |
| 2 bytes / signed      | -32,768 to 32,767 |
| 2 bytes / unsigned    | 0 to 65,535   |
| 3 bytes / signed      | -2,147,483,648 to 2,147,483,647 |
| 3 bytes / unsigned    | 0 to 4,294,967,295 |
| 4 bytes / signed      | -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807 |
| 4 bytes / unsigned    | 0 to 18,446,744,073,709,551,615 |

<br>

> **Best practice**
>
> - Prefer int when the size of the integer doesn’t matter (e.g. the number will always fit within the range of a 2-byte signed integer). For example, if you’re asking the user to enter their age, or counting from 1 to 10, it doesn’t matter whether int is 16 or 32 bits (the numbers will fit either way). This will cover the vast majority of the cases you’re likely to run across.
> - Prefer std::int#_t when storing a quantity that needs a guaranteed range.
> - Prefer std::uint#_t when doing bit manipulation or where well-defined wrap-around behaviour is required.
> 
> Avoid the following when possible:
>
> - Unsigned types for holding quantities
> - The 8-bit fixed-width integer types (it will likely be treated as a char)
> - The fast and least fixed-width types
> - Any compiler-specific fixed-width integers -- for example, Visual Studio defines __int8, __int16, etc…

## Floating Point

When using floating point literals, always include at least one decimal place (even if the decimal is 0). This helps the compiler understand that the number is a floating point number and not an integer.

```cpp
int x{5}; // 5 means integer
double y{5.0}; // 5.0 is a floating point literal (no suffix means double type by default)
float z{5.0f}; // 5.0 is a floating point literal, f suffix means float type
```

Note that by default, floating point literals default to type double. An f suffix is used to denote a literal of type float.

| Size  | Range | Precision |
|:----  |:----- |:--------- |
| 4 bytes   | ±1.18 x 10-38 to ±3.4 x 1038      | 6-9 significant digits, typically 7 |
| 8 bytes   | ±2.23 x 10-308 to ±1.80 x 10308   | 15-18 significant digits, typically 16 |
| 80-bits (typically uses 12 or 16 bytes)   | ±3.36 x 10-4932 to ±1.18 x 104932 | 18-21 significant digits
| 16 bytes  | ±3.36 x 10-4932 to ±1.18 x 104932 | 33-36 significant digits |

> **Best practice**
>
> - Favour double over float unless space is at a premium, as the lack of precision in a float will often lead to inaccuracies.