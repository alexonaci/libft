/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aonaci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/23 19:14:55 by aonaci            #+#    #+#             */
/*   Updated: 2015/11/08 18:07:37 by aonaci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		*(unsigned char*)(dest + i) = *(unsigned char*)(src + i);
		i++;
	}
	return (dest);
}
