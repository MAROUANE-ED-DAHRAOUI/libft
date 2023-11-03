#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
size_t i = 0;
	while(i < n)
	{
		*(unsigned char *)(s + i) = ((unsigned char)c);
		i++;
	}
	
	return (s);
}
/*int main()
{
 	unsigned char *buffer = (unsigned char *)malloc(sizeof * (unsigned char *) + 1);
	
	ft_memset(buffer, '\n', 10);
	printf("%s\n", buffer);

	return (0);
}*/
