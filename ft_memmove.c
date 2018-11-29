/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcornil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 12:30:55 by jcornil           #+#    #+#             */
/*   Updated: 2018/10/24 12:30:59 by jcornil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*source;
	char	*dest;
	size_t	i;

	i = -1;
	source = (char *)src;
	dest = (char *)dst;
	if (source < dest)
		while ((int)(--len) >= 0)
			*(dest + len) = *(source + len);
	else
		while (++i < len)
			*(dest + i) = *(source + i);
	return (dst);
}
