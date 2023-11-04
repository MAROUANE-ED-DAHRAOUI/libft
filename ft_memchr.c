#include "libft.h"

void * ft_memchr(const void *str, int c, size_t len)
{
	size_t i;
	i = 0;

	if(str == NULL)
        {
                return (NULL);
        }
	
	while(i < len)
	{
		if(*((unsigned char *)str + i) == ((unsigned char)c))
			return ((void *)str + i);
		
		i++;
	}

	return (NULL);
}
