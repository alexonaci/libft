/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aonaci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/12 14:25:48 by aonaci            #+#    #+#             */
/*   Updated: 2015/12/18 11:18:17 by aonaci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned	int		i;
	char				*str;
	size_t				l;

	l = ft_strlen((char *)s);
	i = 0;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (s == NULL)
		return (NULL);
	if ((start <= l) && (len <= (l - start)))
	{
		while (len > 0)
		{
			str[i] = s[start + i];
			i++;
			len--;
		}
		str[i] = '\0';
	}
	else
		return (NULL);
	return (str);
}
