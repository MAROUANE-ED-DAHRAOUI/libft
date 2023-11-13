#include "libft.h"

char *ft_strdup(const char *s)
{
    size_t len = ft_strlen(s);

    char *str = (char *)malloc(len + 1);

   	 if (str == NULL)
	      return NULL;
    
        ft_memcpy(str, s, len + 1);

    	str[len] = '\0';

    	return (str);
}
