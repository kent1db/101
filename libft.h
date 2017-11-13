/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrobert- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 13:05:47 by qrobert-          #+#    #+#             */
/*   Updated: 2017/11/13 18:08:31 by qrobert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_atoi(const char *str);
int		ft_strcmp(const char *s1, const char *s2);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strdup(char *src);
int		ft_strlen(char *str);
int		ft_strncmp(const char *s1, const char *s2, unsigned int n);
char	*ft_strncpy(char *dest, const char *src, size_t n);
char	*ft_strstr(char *str, char *to_find);
char	*ft_strnstr(char *str, char *to_find, size_t n);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isupper(int c);
int		ft_islower(int c);
int		ft_isascii(int c);
int		ft_isalnum(int c);
int		ft_isprint(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
char	*ft_strcat(char *dst, const char *src);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t n);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strncat(char *dst, const char *src, size_t n);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
void	*ft_memalloc(size_t size);
void	ft_memdel(void **ap);
char	*ft_strnew(size_t size);
void	ft_strdel(char **as);

#endif
