/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsprigga <jsprigga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 13:54:28 by jsprigga          #+#    #+#             */
/*   Updated: 2018/12/05 19:55:30 by jsprigga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*cp;
	size_t	i;
	size_t	len;

	len = ft_strlen(src);
	cp = (char *)ft_strnew(sizeof(*cp) * len);
	if (cp == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		cp[i] = src[i];
		i++;
	}
	cp[i] = '\0';
	return (cp);
}
