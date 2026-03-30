# libft

A 42 School project reimplementing a subset of the C standard library functions, along with additional utility functions commonly needed in future projects.

---

## About

`libft` is the first project of the 42 curriculum. The goal is to build a personal C library from scratch, without using any standard library functions (except where explicitly allowed).

The result is a static library `libft.a` that can be reused across all future 42 projects.

---

## Functions

### Libc functions

Standard library functions reimplemented from scratch:

| Function | Description |
|---|---|
| `ft_isalpha` | Check if character is alphabetic |
| `ft_isdigit` | Check if character is a digit |
| `ft_isalnum` | Check if character is alphanumeric |
| `ft_isascii` | Check if character is in ASCII table |
| `ft_isprint` | Check if character is printable |
| `ft_strlen` | Compute string length |
| `ft_memset` | Fill memory with a constant byte |
| `ft_bzero` | Zero out a memory area |
| `ft_memcpy` | Copy memory area |
| `ft_memmove` | Copy memory area, handling overlaps |
| `ft_strlcpy` | Copy string with size bound |
| `ft_strlcat` | Concatenate string with size bound |
| `ft_toupper` | Convert character to uppercase |
| `ft_tolower` | Convert character to lowercase |
| `ft_strchr` | Locate character in string (from start) |
| `ft_strrchr` | Locate character in string (from end) |
| `ft_strncmp` | Compare two strings up to n characters |
| `ft_memchr` | Scan memory for a character |
| `ft_memcmp` | Compare two memory areas |
| `ft_strnstr` | Locate substring in string |
| `ft_atoi` | Convert string to integer |
| `ft_calloc` | Allocate zeroed memory |
| `ft_strdup` | Duplicate a string |

### Additional functions

Utility functions not in the standard library:

| Function | Description |
|---|---|
| `ft_substr` | Extract a substring from a string |
| `ft_strjoin` | Concatenate two strings into a new one |
| `ft_strtrim` | Trim characters from start and end of string |
| `ft_split` | Split a string by a delimiter character |
| `ft_itoa` | Convert integer to string |
| `ft_strmapi` | Apply a function to each character of a string |
| `ft_striteri` | Apply a function to each character (in place) |
| `ft_putchar_fd` | Output a character to a file descriptor |
| `ft_putstr_fd` | Output a string to a file descriptor |
| `ft_putendl_fd` | Output a string followed by a newline to a fd |
| `ft_putnbr_fd` | Output an integer to a file descriptor |

---

## Usage

### Compilation

```bash
make
```

This produces `libft.a`.

### Integration

Copy `libft.a` and `libft.h` into your project, then compile with:

```bash
cc main.c -L. -lft -o my_program
```

Or include it directly in your Makefile.

---

## Makefile Rules

```bash
make        # Compile and produce libft.a
make clean  # Remove object files
make fclean # Remove object files and libft.a
make re     # Full recompile
```

---

## Concepts Covered

- Manual reimplementation of standard C functions
- Memory management (`malloc`, `free`)
- Pointer arithmetic
- Static library creation (`ar`)
- Writing clean, normed C code