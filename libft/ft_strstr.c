/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aonaci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/02 19:28:37 by aonaci            #+#    #+#             */
/*   Updated: 2015/11/17 11:47:20 by aonaci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *target)
{
	size_t	length;

	length = ft_strlen(target);
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
	return (NULL);
}
