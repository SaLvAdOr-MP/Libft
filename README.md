*This project has been created as part of the 42 curriculum by smaria-r.*

# Libft

## Description

`Libft` is a C library built for the first project of the 42 Common Core. Its goal is to understand how everyday C functions work by implementing them and packaging them into a library that can be reused in later projects.

### Library overview

| Part | Area                                         | Functions                                                                                                                              |
| ---- | -------------------------------------------- | -------------------------------------------------------------------------------------------------------------------------------------- |
| 1    | Character classification and case conversion | `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`                                       |
| 1    | Memory operations                            | `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`                                              |
| 1    | String operations and conversion             | `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup`, `ft_atoi`                 |
| 2    | String construction and callbacks            | `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`, `ft_strmapi`, `ft_striteri`                                            |
| 2    | Output to file descriptors                   | `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`                                                                       |
| 3    | Singly linked lists                          | `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`, `ft_lstsize`, `ft_lstlast`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap` |

**Part 1** reimplements familiar C library functions. **Part 2** adds utilities such as `ft_split`, which produces a NULL-terminated array of allocated strings, and `ft_itoa`, which produces an allocated decimal string.

**Part 3** uses `t_list` nodes with a `void *content` field and a `next` pointer. The list functions cover node creation, insertion, traversal and cleanup. `ft_lstiter` applies a callback to each node's content, while `ft_lstmap` builds a new list from the callback results.

## Instructions

From the repository root, build the library with:

```sh
make
```

Use `make clean` to remove object files, `make fclean` to remove the object files and archive, or `make re` to rebuild from scratch.

The Makefile compiles each source file into an object file using `cc`. For example, `ft_strlen.c` is compiled with:

```sh
cc -Wall -Wextra -Werror -c ft_strlen.c -o ft_strlen.o
```

It then uses `ar rcs` to package the object files into the static library `libft.a`.

## Resources

- The 42 `Libft` subject, for the project requirements and function specifications.
- Linux manual pages, for references on C library functions and memory allocation.
- [GNU make](https://www.gnu.org/software/make/manual/make.html), for build rules and targets.
- [Francinette](https://github.com/xicodomingues/francinette), for running tests during development.
- [GeekforGeeks](https://www.geeksforgeeks.org/c/c-programming-language/), for understanding concepts.

## AI usage

I used ChatGPT to explain me concepts visually, troubleshoot Francinette's linked-list test setup, and draft this README.
