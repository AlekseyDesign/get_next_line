/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsprigga <jsprigga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 20:30:08 by jsprigga          #+#    #+#             */
/*   Updated: 2018/11/30 17:35:00 by jsprigga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t i;

	i = -1;
	if (!dst && !src)
		return (dst);
	while (++i < n)
	{
		((char *)dst)[i] = ((char *)src)[i];
	}
	return (dst);
}
