/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsprigga <jsprigga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 19:24:38 by jsprigga          #+#    #+#             */
/*   Updated: 2018/12/06 11:33:19 by jsprigga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t i;

	i = -1;
	if (len == 0)
		return (b);
	while (++i < len)
		((char *)b)[i] = (unsigned char)c;
	return (b);
}
