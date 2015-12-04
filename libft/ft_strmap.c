/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aonaci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 00:53:12 by aonaci            #+#    #+#             */
/*   Updated: 2015/12/04 14:11:02 by aonaci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*str;

	i = 0;
	str = (char*)malloc(sizeof(char) * ft_strlen(s));
	while (s[i] != '\0')
	{
		str[i] = f(s[i]);
		i++;	
	}
	return (str);
}
