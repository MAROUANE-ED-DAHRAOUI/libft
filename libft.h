#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

typedef struct s_list
{
	void *content;
	size_t content_size;
	struct s_list *next;

}	t_list;

size_t ft_strlen(const char *s);
char *ft_strdup(const char *s);
char *ft_strcpy(char *dest, const char *src);
void ft_bzero(void *s, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
void * ft_memmove( void * dest, const void * src, size_t size);
void * ft_memchr(const void *str, int c, size_t len);
void *ft_memset(void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);


#endif
