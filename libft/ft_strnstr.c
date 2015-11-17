/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aonaci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/02 20:50:54 by aonaci            #+#    #+#             */
/*   Updated: 2015/11/17 20:20:37 by aonaci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strnstr(const char *str, const char *target, size_t n)
{
	size_t length;

	length = ft_strlen(target);
	while (n < length)
	{
		if (!str || !target)
			return (NULL);
		if (*target == '\0')
			return ((char*)str);
		while (*str)
		{
			if (ft_strncmp(str, target, length) == 0)
				return ((char*)str);
			str++;
		}
	}
	return (NULL);
}
