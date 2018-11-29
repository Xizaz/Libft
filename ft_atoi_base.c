/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcornil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 15:33:39 by jcornil           #+#    #+#             */
/*   Updated: 2018/10/28 15:34:49 by jcornil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_atoi_base(const char *str, int str_base)
{
	int		neg;
	int		nb;
	int		current;

	nb = 0;
	while (*str == ' ' || *str == '\n' || *str == '\t'
		|| *str == '\f' || *str == '\r' || *str == '\v')
		str++;
	neg = (*str == '-' ? 1 : 0);
	if (*str == '-' || *str == '+')
		str++;
	current = ft_base(*str);
	while (current >= 0 && current < str_base)
	{
		nb = nb * str_base + current;
		str++;
		current = ft_base(*str);
	}
	return (neg ? -nb : nb);
}
