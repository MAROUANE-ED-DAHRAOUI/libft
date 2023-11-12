#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t sizedst)
{
	size_t Sr;
	size_t ds;

	if(!dest && !sizedst)
		return (strlen(src));
	
	Sr = strlen(src);
	ds = strlen(dest);

	if(sizedst <= ds || sizedst == 0)
		return(sizedst + Sr);
	
	int i = 0;
	while(src[i] != '\0' && i + 1 < (sizedst - ds))
	{
		*((char *)dest + ds + i) = *((const char *)src + i);
		i++;
	}

	*((char *)dest + ds + i) = '\0';

	return (ds + Sr);	
}
