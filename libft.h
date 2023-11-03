#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct list
{
	void 	*content;
	struct list *next;

}; t_list

void *memcpy(void *dest, const void *src, size_t n);
void *ft_memset(void *s, int c, size_t n);

#endif
