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

int	ft_isalpha(int c);
char *ft_strstr(const char *haystack, const char *needle);
char	*ft_strrchr(const char *s, int c);
char *ft_strchr(const char *s, int c);
size_t ft_strlcat(char *dest, const char *Src, size_t Size_dst);
char *ft_strcat(char *dest, const char *src);
char *ft_strncat(char *dest, const char *src, size_t n);
char *ft_strncpy(char *dest, const char *src, size_t n);
char *ft_strcpy(char *dest, const char *src);
size_t ft_strlen(const char *s);
char *ft_strdup(const char *s);
void ft_bzero(void *s, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
void * ft_memmove( void * dest, const void * src, size_t size);
void * ft_memchr(const void *str, int c, size_t len);
void *ft_memset(void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
int ft_atoi(char *s);

#endif
