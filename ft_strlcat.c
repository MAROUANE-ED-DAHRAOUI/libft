#include "libft.h"

size_t ft_strlcat(char *dest, const char *Src, size_t Size_dst)
{
    size_t ds_len = ft_strlen(dest);
    size_t Src_len = ft_strlen(Src);
    size_t Total_len = ds_len + Src_len;

    if (Total_len >= Size_dst)
	{
       		return Total_len;
    	}

    size_t Remaining = Size_dst - ds_len - 1;

    ft_strncat(dest, Src, Remaining);

    dest[Size_dst - 1] = '\0';

    return Total_len;
}
