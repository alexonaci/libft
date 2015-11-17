/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aonaci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/08 17:03:18 by aonaci            #+#    #+#             */
/*   Updated: 2015/11/17 20:23:55 by aonaci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	char			*d;
	char			*l;
	const	char	*s;

	i = 0;
	d = dst;
	s = src;
	l = (char*)(malloc(sizeof(char) * len));
	while (i < len)
	{
		l[i] = s[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		d[i] = l[i];
		i++;
	}
	free(l);
	return ((void*)dst);
}
