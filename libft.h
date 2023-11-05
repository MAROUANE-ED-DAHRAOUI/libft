#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

typedef struct list
{
	void 	*content;
	struct list *next;

} t_list;

void *memcpy(void *dest, const void *src, size_t n);
void * ft_memmove( void * dest, const void * src, size_t size);
void * ft_memchr(const void *str, int c, size_t len);
void *ft_memset(void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n)


#endif
