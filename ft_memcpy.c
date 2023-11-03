#include "libft.h"
/*
	ft_memcpy copies n bytes from src to dest.
	if dest and src are null, null is returned.
*/

void *memcpy(void *dest, const void *src, size_t n)
{
	if(dest == NULL && src == NULL)
		return (NULL);

	size_t i;
	i = 0;
	
	while(i < n)
	{
		*((char *)dest + i) = *((char *)src + i);
		i++;
	}

	return (dest);
}
