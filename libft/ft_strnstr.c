/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsprigga <jsprigga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 16:50:59 by jsprigga          #+#    #+#             */
/*   Updated: 2018/11/27 19:28:54 by jsprigga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	substr_len;

	i = 0;
	if (!(*to_find))
		return ((char *)str);
	substr_len = ft_strlen(to_find);
	while (str[i] && i < len)
	{
		j = 0;
		while (to_find[j] && i + j < len && str[i + j] == to_find[j])
			j++;
		if (substr_len == j)
			return ((char *)&str[i]);
		i++;
	}
	return (0);
}
