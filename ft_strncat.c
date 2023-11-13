#include "libft.h"

char *ft_strncat(char *dest, const char *src, size_t n)
{
        size_t dst_len = ft_strlen(dest);
        size_t i;

        for (i = 0 ; i < n && src[i] != '\0' ; i++)
                   dest[dst_len + i] = src[i];

        dest[dst_len + i] = '\0';

        return dest;
}
