#include "libft.h"

/*
	This function is used to search for the first occurrence
	of a character in a given string .
*/
char *ft_strchr(const char *s, int c)
{
    	while (*s != '\0')
	{
        	if (*s == c)
		{
            		return (char *)s;
        	}
        	s++;
    	}
    
    	return NULL;
}
