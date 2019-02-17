/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsprigga <jsprigga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 18:21:23 by jsprigga          #+#    #+#             */
/*   Updated: 2018/12/14 15:30:43 by jsprigga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_strdel(char **as)
{
	char *tmp;

	tmp = *as;
	if (!as || !*as)
		return ;
	while (**as)
	{
		**as = '\0';
		*as += 1;
	}
	free(tmp);
	*as = NULL;
}
