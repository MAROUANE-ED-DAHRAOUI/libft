# libft
	
#Mandatory part

V.1 Technical considerations

• Your libft.h file can contain macros and typedefs if needed.
• A string must ALWAYS end with a ’\0’, even if it is not included in the function’s
description, unless explicitly stated otherwise.
• It is forbidden to use global variables.
• If you need sub-functions to write a complex function, you must define these subfunctions as static as stipulated in the Norm.


• You must pay attention to your types and wisely use the casts when needed, especially when a void* type is involved. Generally speaking, avoid implicit casts.

Example:
char *str;
str = malloc(42 * sizeof(*str)); /* Wrong ! Malloc returns a void * (implicit cast) */
str = (char *) malloc(42 * sizeof(*str)); /* Right ! (explicit cast) */


Libft Your first own library
V.2 Part 1 - Libc functions
In this first part, you must re-code a set of the libc functions, as defined in their
man. Your functions will need to present the same prototype and behaviors as the originals. Your functions’ names must be prefixed by “ft_”. For instance strlen becomes
ft_strlen.
Some of the functions’ prototypes you have to re-code use the
"restrict" qualifier. This keyword is part of the c99 standard.
It is therefore forbidden to include it in your prototypes and to
compile it with the flag -std=c99.

You must re-code the following functions:

• memset
• bzero
• memcpy
• memccpy
• memmove
• memchr
• memcmp
• strlen
• strdup
• strcpy
• strncpy
• strcat
• strncat
• strlcat
• strchr
• strrchr
• strstr
• strnstr
• strcmp
• strncmp
• atoi
• isalpha

Libft Your first own library

• isdigit
• isalnum
• isascii
• isprint
• toupper
• tolower

