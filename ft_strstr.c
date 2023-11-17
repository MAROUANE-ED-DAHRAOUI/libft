#include "libft.h"

char *ft_strstr(const char *haystack, const char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		const char *l = haystack;
		const char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return ((char *)haystack);
	}
	return (0);
}
