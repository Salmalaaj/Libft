# Libft - My Custom C Library

## Overview

**Libft** is my first custom C library, created as part of my journey into systems programming. The goal of this project was to re-implement several essential functions from the C standard library and expand the library with additional utility functions. This library is intended to serve as a solid foundation for future C projects, ensuring that the code is optimized, memory-safe, and adheres to strict coding standards.

## Project Structure

### 1. **Libc Functions**
In the first part of the project, I re-implemented a series of standard C library functions, each prefixed with `ft_` to avoid conflicts. These functions include:

- `ft_isalpha` (checks if a character is an alphabetic letter)
- `ft_isdigit` (checks if a character is a digit)
- `ft_memset` (fills a memory area with a constant byte)
- `ft_strlcpy` (copies a string to a buffer)
- `ft_atoi` (converts a string to an integer)
- And many more...

### 2. **Additional Utility Functions**
In the second part, I added functions that are not part of the standard C library but are commonly needed, such as:

- `ft_substr` (creates a substring from a given string)
- `ft_strjoin` (concatenates two strings)
- `ft_strtrim` (trims characters from the beginning and end of a string)
- `ft_split` (splits a string into an array based on a delimiter)
- `ft_itoa` (converts an integer to a string)

## Compilation and Usage

### Makefile
The project includes a `Makefile` to handle the compilation process. The following rules are available:

- `all`: Compiles the library (`libft.a`).
- `clean`: Removes object files.
- `fclean`: Removes object files and the library.
- `re`: Recompiles the library from scratch.

To compile the library, simply run:

```bash
make
```


## Including Libft in Your Projects

To use `libft` in your own C projects:

1. Copy the `libft` folder into your project directory.
2. Include the `libft.h` header in your source files.
3. Compile your project with the `libft.a` library.

### Example:

```c
#include "libft.h"

int main(void)
{
    char *str = ft_strdup("Hello, Libft!");
    ft_putstr_fd(str, 1);
    free(str);
    return (0);
}
```
## Testing

While the project doesn’t require submission of test cases, I strongly recommend writing tests for each function to ensure correctness and to simplify the debugging process. This also helps during peer evaluation and defense.


## Conclusion

Libft has been a crucial part of my learning experience in C programming, providing a strong understanding of how fundamental functions work under the hood. I plan to build upon this library and use it as a foundation for future projects. Feedback and contributions are always welcome!

