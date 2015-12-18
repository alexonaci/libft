/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aonaci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/02 20:50:54 by aonaci            #+#    #+#             */
/*   Updated: 2015/12/18 11:16:20 by aonaci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	length;
	size_t	i;

	length = ft_strlen(s2);
	if (!s1 || !s2 || !n || n < length)
		return (NULL);
	if (n < length)
		return (NULL);
	if (!*s2)
		return ((char *)s1);
	i = 0;
	while (s1[i] && i <= (n - length))
	{
		if (ft_strncmp(&s1[i], s2, length) == 0)
			return ((char *)&s1[i]);
		i++;
	}
	return (NULL);
}
