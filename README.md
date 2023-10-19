# Ft_printf

![Status](https://img.shields.io/badge/status-finished-success)
![Language](https://img.shields.io/badge/language-C-blue)

## My own printf function

The goal of the project is to reimplement the printf function from the C standard library.
It introduces to structured programming and variadic programming.

## Supported format specifier

| Specifier | Description |
|----------|-------------|
| `%c` | Single character |
| `%s` | String |
| `%p` | Pointer address |
| `%d`, `%i`| Integer |
| `%u` | Unsigned integer |
| `%x`, `%X` | Hexadecimal (lower/uppercase) |
| `%%` | Percent sign|

## Installation

Bash
```
# Clone repository
git clone https://github.com/yannallo/ft_printf.git

# Enter directory
cd ft_printf

# Build
make
```

## Usage

Just include the header in your file and link during compilation.
e.g:

Bash
```
gcc main.c -Ift_printf -Lft_printf -lftprintf
```
main.c
``` 
#include "ft_printf.h"

int main(void)
{
  char s[15] = "Hello world !!";

  ft_printf("Message:\n%s\n", s);
  return 0;
}
