/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aonaci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/17 16:45:18 by aonaci            #+#    #+#             */
/*   Updated: 2015/12/17 17:46:28 by aonaci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
    t_list	*p;

    if (!(p = (t_list*)malloc(sizeof(*p) * (content_size))))
        return (NULL);
    if (content)
    {
        p->content = (void *)malloc(sizeof(content));
        ft_memcpy(p->content, content, content_size);
        p->content_size = content_size;
    }
    else
    {
        p->content = NULL;
        p->content_size = 0;
    }
    p->next = NULL;
    return (p);
}
