/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrtint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcornil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 12:14:00 by jcornil           #+#    #+#             */
/*   Updated: 2019/07/30 12:14:02 by jcornil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_sqrtint(int nbr)
{
	int i;
	int res;

	res = 1;
	i = 1;
	if (nbr == 0 || nbr == 1)
		return (nbr);
	while (res <= nbr)
	{
		i++;
		res = i * i;
	}
	return (i - 1);
}
