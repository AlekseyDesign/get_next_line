/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt_rational.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsprigga <jsprigga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 13:27:31 by jsprigga          #+#    #+#             */
/*   Updated: 2018/12/03 13:29:20 by jsprigga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt_rational(int nb)
{
	int i;

	i = 1;
	while (i * i < nb)
		i++;
	if (i * i == nb)
		return (i);
	return (0);
}
