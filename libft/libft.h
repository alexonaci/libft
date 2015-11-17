/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aonaci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/02 20:41:02 by aonaci            #+#    #+#             */
/*   Updated: 2015/11/17 20:37:01 by aonaci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <string.h>
#include <stdlib.h>

void	ft_putchar(char c);
char	*ft_strstr(const char *haystack, const char *needle);
char	*ft_strnstr(const char *haystack, const char*needle, size_t n);
char	*ft_strncpy(char *dest, const char *src, size_t n);
char	*ft_strcat(char *dest, const char *src);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strncat(char *dest, const char *src, size_t n);
size_t	ft_strlen(const char *str);
size_t	ft_strlcat(char *dest, const char *src, size_t dst_size);
char	*ft_strcpy(char *dest, const char *src);
int		ft_strcmp(const char *s1, const char *s2);
char	*ft_strcat(char *dest, const char *src);
void	*ft_memset(void *s, int c, size_t n);
void	ft_putstr(char *str);
void	*ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t len);
char	*ft_strdup(const char *str);
char	*ft_strchr(const char *str, int c);
void	*ft_memccpy(void *ds, const void *sr, int c, size_t len);
void	*ft_memmove(void *to, const void *from, size_t len);
int		ft_atoi(const char *str);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_isprint(int c);
int		ft_isascii(int c);
int		ft_isalnum(int c);
int 	ft_isalpha(int c);
int		ft_isdigit(int c);

#endif