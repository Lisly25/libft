******LIBFT******

Libft is a library of basic functions in c - the first project in Hive Helsinki's curriculum. It is comprised of three parts:

Part I - Recreation of existing functions

Part II - Some other functions, mostly concerning strings and writing into files

Part III - Bonus exercises, with functions manipulating linked lists

Part IV. - Ft_printf - a whole other project of its own, my own version of printf

Part V. - get_next_line - another entire project, this function is capable of reading a file line by line, using a buffer size that can be set

A Makefile and a libft.h header file containing all the functions' prototypes are also included.

******HOW TO USE******

0. Clone the repository

1. If you only need the functions contained in Part I and II, run the command "make", which will compile a libft.a library.
If you also want to use functions from Part III, use the command "make bonus" instead: in that case, the libft.a library being compiled will contain all the functions from all three parts.

2. Include the libft.h header in your own files if you want to use any of the functions (#include "libft.h")

3. Compile (note that this is assuming you have all your files in the same folder):

cc your_file.c libft.a

******PART I FUNCTIONS******

These functions are meant to work the same way as their original libc conuterparts, as per their manual page on MAC. The only difference is that they are named as ft_*
These are:

- isalpha
- isdigit
- isalnum
- isascii
- isprint
- strlen
- memset
- bzero
- memcpy
- memmove
- strlcpy
- strlcat
- toupper
- tolower
- strchr
- strrchr
- strncmp
- memchr
- memcmp
- strnstr
- atoi
- strdup
- calloc

Special note - ft_calloc:

Depending on you purposes, you might want to configure the maxsize variable.

******PART II FUNCTIONS******

These functions, even if they have a libc counterpart, do not work in the exact same way.

ft_substr:
- Using malloc it allocates and returns a substring from string "s"
- The substring will begin at s[start], and is, at maximum, of size "len"
- If the allocation fails, NULL is returned
- example:
	- s = "Hello world"
	- start = 1
	- len = 4
	- returned string is: "ello"

ft_strjoin:
- Using malloc it allocates and returns a new string by concatenating s1 and s2 strings
- If the allocation fails, NULL is returned
- example:
	- s1 = "Hello"
	- s2 = "wolrd"
	- returned string is: "Helloworld"

ft_strtrim:
- Using malloc it allocates and returns a new string by making a copy of s1 from which any characters that were included in set have been remove
- If the allocation fails, NULL is returned
- example:
	- s1 = "Hello world"
	- set = l, d
	- returned string is: "Heo wor"

ft_split:
- Using malloc it allocates and returns an array of strings. This string is derived by splitting the string "s" at any point where a delimiter character "c" is found
- The end of the array will be signified by a NULL pointer
- If the allocation fails, only NULL is returned
- example:
	- string s = "Hello world"
	- delimiter c = "l"
	- the elements of the array returned are: "He", "o wor", "d"

ft_itoa:
- Using malloc it allocates and returns a string equivalent of the integer "n"
- Negative integers are handled
- If the allocation fails, NULL is returned

ft_strmapi:
- Returns a new string, the elements of which will be derived by iterating through every character in the string "s" and calling function "f". The return value of "f" is what will be stored in the returned string
- If the allocation fails, NULL is returned
- example:
	- let's say that "f" is a function that returns "O" if the ascii value of the character it gets passed is odd, and "E" if it is even
	- string s = "Hello world"
	- returned string is: "EOEEOEOOEEE"

ft_striteri:
- Similar to ft_strmapi, except the original string "s" is being modified instead of a copy, and the characters are passed by address to function "f"

ft_putchar_fd:
- requires a file descriptor (a file to be already opened by having used the function open())
- writes the character "c" into the given file descriptor

ft_putstr_fd:
- requires a file descriptor (a file to be already opened by having used the function open())
- writes the string "s" into the given file descriptor

ft_putendl_fd:
- requires a file descriptor (a file to be already opened by having used the function open())
- writes the string "s" into the given file descriptor as well as a newline

ft_putnbr_fd:
- requires a file descriptor (a file to be already opened by having used the function open())
- writes the integer "n" into the given file descriptor

******PART III******

All of these functions concern linked lists. The declaration of the type of linked list node I've been using is found inside the libft.h header file. The last node of a linked list will have the "next" variable set to NULL

ft_lstnew:
- Using malloc it allocates and returns a new node
- The node's content will be what is passed as the "content" parameter to this function
- The variable "next" is set to NULL

ft_lstadd_front:
- Changes an existing linked list by adding the new node "new" to its front, making it the new beginning of the list
- Instead of the list itself, only a pointer to the first link of the list is passed as a parameter

ft_lstsize:
- Counts the length of a linked list
- Returns an integer which represent the number of nodes in the list

ft_lstlast:
- Takes the beginning of a linked list as a parameter
- Returns the last node of the list

ft_lstadd_back:
- Similarly to ft_lstadd_front, only a pointer to the first link of the list is passed as a parameter, not the list itself
- the node "new" is added to the end of the linked list

ft_lstdelone:
- takes a function as a parameter that is capable of freeing memory (for example, this could be the library function free())
- this "del" function is used on the node that is passed as the other parameter
- note that the node's "next" variable is not freed

ft_lstclear:

ft_lstiter:
- iterates through linked list "lst", calling the function "f" on every node

ft_lstmap:


