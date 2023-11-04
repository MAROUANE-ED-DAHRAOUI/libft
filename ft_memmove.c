#include "libft.h"

void * ft_memmove( void * dest, const void * src, size_t size)
{
	char* a = dest;
 	const char* b = src;

	if(a > b)
	{
		while(size--)
		{
			a[size] = b[size];
		}
	}
	else
	{
		while(size--)
		{
			*a++ = *b++;
		}
	}
	return (dest);
}
