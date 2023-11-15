#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    size_t len = ft_strlen(s);

    while (len && len > 0)
    {
        if (s[len - 1] == (char)c)
            return ((char *)(s + len));

        len--;
    }

    return NULL;
}
