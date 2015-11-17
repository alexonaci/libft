/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aonaci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/08 16:11:40 by aonaci            #+#    #+#             */
/*   Updated: 2015/11/17 20:35:39 by aonaci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *d, const void *s, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		*(unsigned char*)(d + i) = *(unsigned char*)(s + i);
		if (*(unsigned char*)(s + i) == (unsigned char)c)
			return (d + 1 + i);
		i++;
	}
	return (NULL);
}
