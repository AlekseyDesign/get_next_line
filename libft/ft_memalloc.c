/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsprigga <jsprigga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 12:30:38 by jsprigga          #+#    #+#             */
/*   Updated: 2018/12/06 11:32:37 by jsprigga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	void *mem;

	mem = malloc(size);
	if (!(mem))
		return (NULL);
	while (size)
	{
		((char *)mem)[size - 1] = '\0';
		size--;
	}
	return (mem);
}
