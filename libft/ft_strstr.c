/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsprigga <jsprigga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 20:13:54 by jsprigga          #+#    #+#             */
/*   Updated: 2018/12/19 13:13:53 by jsprigga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	int i;
	int j;
	int substr_len;

	i = 0;
	if (!(*to_find))
		return ((char *)str);
	substr_len = ft_strlen(to_find);
	while (str[i])
	{
		j = 0;
		while (to_find[j] && str[i + j] == to_find[j])
			j++;
		if (substr_len == j)
			return ((char *)&str[i]);
		i++;
	}
	return (0);
}
