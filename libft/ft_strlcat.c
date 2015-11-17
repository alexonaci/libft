/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aonaci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/02 19:54:10 by aonaci            #+#    #+#             */
/*   Updated: 2015/11/08 18:06:57 by aonaci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t		ft_strlcat(char *dest, const char *src, size_t dst_size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dest[j])
		j++;
	while (src[i])
	{
		if (j < dst_size - 1)
			dest[j] = src[i];
		j++;
		i++;
	}
	dest[j - 1] = '\0';
	return (j);
}
