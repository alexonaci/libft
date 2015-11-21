/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aonaci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/02 19:54:10 by aonaci            #+#    #+#             */
/*   Updated: 2015/11/20 22:57:38 by aonaci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	d_end;

	i = 0;
	while (dst[i] && i < size)
		i++;
	d_end = i;
	while (src[i - d_end] && i < size - 1)
	{
		dst[i] = src[i - d_end];
		i++;
	}
	if (d_end < size)
		dst[i] = '\0';
	return (d_end + ft_strlen(src));
}
