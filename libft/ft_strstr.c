/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aonaci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/02 19:28:37 by aonaci            #+#    #+#             */
/*   Updated: 2015/11/21 01:12:14 by aonaci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	size_t	length;

	length = ft_strlen(s2);
	if (!s1 || !s2)
		return (NULL);
	if (*s2 == '\0')
		return ((char*)s1);
	while (*s1)
	{
		if (ft_strncmp(s1, s2, length) == 0)
			return ((char*)s1);
		s1++;
	}
	return (NULL);
}
