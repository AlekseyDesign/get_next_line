/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsprigga <jsprigga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 20:27:21 by jsprigga          #+#    #+#             */
/*   Updated: 2018/11/27 20:32:12 by jsprigga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = ft_strlen(s);
	while (i != -1)
	{
		if (s[i] == (char)c)
			return ((char *)&(s[i]));
		i--;
	}
	return (0);
}
