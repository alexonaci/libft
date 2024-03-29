/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aonaci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/23 17:37:47 by aonaci            #+#    #+#             */
/*   Updated: 2015/11/13 14:28:48 by aonaci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_bzero(void *s, size_t n)
{
	char	*p;
	size_t	i;

	i = 0;
	p = s;
	while (p[i] && n--)
	{
		p[i] = '\0';
		i++;
	}
	return (s);
}
