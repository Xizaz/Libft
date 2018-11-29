/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcornil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 15:54:38 by jcornil           #+#    #+#             */
/*   Updated: 2018/10/27 15:54:43 by jcornil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*fresh;
	unsigned int	i;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	fresh = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (fresh == NULL)
		return (NULL);
	if (s && f)
	{
		while (s[i] != 0)
		{
			fresh[i] = f(i, s[i]);
			i++;
		}
	}
	fresh[i] = '\0';
	return (fresh);
}
