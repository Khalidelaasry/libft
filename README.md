# Libft 📚

## 🧠 Overview

**Libft** is the very first project at [42 School](https://42.fr/).  
Its goal is to create your own **C standard library** — a collection of essential functions that you’ll reuse throughout the rest of your 42 journey.  

By recreating functions from the standard C library and implementing your own utilities, you’ll gain a deep understanding of **memory management**, **string manipulation**, and **low-level programming**.

---


---

## 🧩 Function Categories

### 🔤 Character Checks
| Function | Description |
|-----------|--------------|
| `ft_isalpha` | Checks if a character is alphabetic |
| `ft_isdigit` | Checks if a character is a digit |
| `ft_isalnum` | Checks if a character is alphanumeric |
| `ft_isascii` | Checks if a character is part of the ASCII set |
| `ft_isprint` | Checks if a character is printable |
| `ft_toupper` | Converts lowercase to uppercase |
| `ft_tolower` | Converts uppercase to lowercase |

---

### 🧵 String Manipulation
| Function | Description |
|-----------|--------------|
| `ft_strlen` | Returns the length of a string |
| `ft_strdup` | Duplicates a string |
| `ft_strchr` | Finds the first occurrence of a character in a string |
| `ft_strrchr` | Finds the last occurrence of a character in a string |
| `ft_strncmp` | Compares two strings up to n characters |
| `ft_strnstr` | Locates a substring in a string |
| `ft_strjoin` | Joins two strings into a new one |
| `ft_strtrim` | Removes characters from the beginning and end of a string |
| `ft_split` | Splits a string into an array of strings using a delimiter |
| `ft_substr` | Extracts a substring from a string |
| `ft_strlcpy` | Copies strings with size checking |
| `ft_strlcat` | Concatenates strings with size checking |
| `ft_strmapi` | Applies a function to each character of a string (creates a new string) |
| `ft_striteri` | Applies a function to each character of a string (modifies in place) |

---

### 💾 Memory Functions
| Function | Description |
|-----------|--------------|
| `ft_memset` | Fills memory with a constant byte |
| `ft_bzero` | Sets memory to zero |
| `ft_memcpy` | Copies bytes from one memory area to another |
| `ft_memmove` | Copies memory areas (safe for overlap) |
| `ft_memchr` | Scans memory for a character |
| `ft_memcmp` | Compares memory areas |
| `ft_calloc` | Allocates and zeroes memory |

---

### 🔢 Conversions
| Function | Description |
|-----------|--------------|
| `ft_atoi` | Converts a string to an integer |
| `ft_itoa` | Converts an integer to a string |

---

### 🖨️ File Descriptor Output
| Function | Description |
|-----------|--------------|
| `ft_putchar_fd` | Outputs a character to a given file descriptor |
| `ft_putstr_fd` | Outputs a string to a given file descriptor |
| `ft_putendl_fd` | Outputs a string followed by a newline |
| `ft_putnbr_fd` | Outputs an integer as a string |

---

## ⚙️ Compilation

To compile the library, simply run:

```bash
make
