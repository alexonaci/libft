/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aonaci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/02 21:13:57 by aonaci            #+#    #+#             */
/*   Updated: 2015/11/17 20:38:29 by aonaci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int		main(void)
{
//	char s1[]="feimnfginwsongrsfinenf";
//	char s2[]="songrjefjdfksdjfbsdjkbfks";


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
/*
	printf("%d\n", ft_strncmp(s1, s2, 10));
	printf("%d\n", strncmp(s1, s2, 10));
	printf("%s\n", ft_strnstr(s1, s2, 2));
	printf("%s\n", strnstr(s1, s2, 2));*/
/*
	printf("%s\n", strncpy(s1, s2, 20));
	printf("%s\n", ft_strncpy(s1, s2, 20));
*/
/*	
	printf("%s\n", ft_memmove(s1, s2, 10));
	printf("%s\n", memmove(s1, s2, 10));
	return (0);*/

	printf("%d\n", ft_isalnum('@'));
	printf("%d\n", isalnum('+'));
}