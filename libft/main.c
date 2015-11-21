/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aonaci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/02 21:13:57 by aonaci            #+#    #+#             */
/*   Updated: 2015/11/21 01:01:17 by aonaci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int		main(void)
{
	char s1[]="un d9eux";
	//char s2[]="9";


	//ft_atoi(s1);
	//ft_atoi(s2);

	//printf("%s\n", memcpy(s1,s2,3));
	//printf("%s\n", ft_memcpy(s1, s2, 3));
	//printf("%s\n", ft_strdup(s1));
	//printf("%s", strdup(s1));
	//printf("%s", ft_strchr(s1, 3));
	//printf("%s", strchr(s1, 3));
	//printf("%s\n", memccpy(s2, s1, 'B', 9));
	//printf("%s", ft_memccpy(s2, s1, 'B', 9));
	//printf("%d", ft_atoi(s1) + ft_atoi(s2));
	
	/*printf("%s", ft_strstr(s1, s2));*/

/*	printf("%d\n", ft_strncmp(s1, s2, 30));
	printf("%d\n", strncmp(s1, s2, 30));
*/
	printf("%s\n", ft_strnstr(s1, "9", 3));
	printf("%s\n", strnstr(s1, "9", 3));
/*
	printf("%s\n", strncpy(s1, s2, 20));
	printf("%s\n", ft_strncpy(s1, s2, 20));
*/
/*	
	printf("%s\n", ft_memmove(s1, s2, 10));
	printf("%s\n", memmove(s1, s2, 10));
	return (0);*/

	/*printf("%d\n", ft_isalnum('@'));
	printf("%d\n", isalnum('+'));*/

/*		
	printf("%d\n", ft_memcmp(s1, s2, 30));
	printf("%d\n", memcmp(s1, s2, 30));
*/

	/*printf("%s\n", ft_strchr(s1, 'r'));
	printf("%s\n", strchr(s1, 'r'));
	*/
/*
	printf("%s\n", ft_memchr(s1, 'r', 10));
	printf("%s\n", memchr(s1, 'r', 10));
*/
//	printf("%zu", ft_strlen(s1));
	//printf("%zu\n", ft_strlcat(s1, s2, 100));
	//printf("%lu\n", strlcat(s1, s2, 100));


//	printf("%s\n", ft_memset(s1, 'c', 100));
//	printf("%s\n", memset(s1, 'c', 100));
//	printf("%s\n", ft_strrchr(s1, 0));
//	printf("%s\n", strrchr(s1, 0));
}
