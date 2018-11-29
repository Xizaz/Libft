/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcornil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 12:34:29 by jcornil           #+#    #+#             */
/*   Updated: 2018/10/28 13:05:26 by jcornil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	words_size(const char *s, char c)
{
	int		len;

	len = 0;
	while (*s != c && *s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**fr;
	int		c_words;
	int		i;

	if (!s)
		return (NULL);
	c_words = ft_count_words(s, c);
	fr = (char **)malloc((c_words + 1) * sizeof(char*));
	i = 0;
	if (!fr)
		return (NULL);
	while (c_words--)
	{
		while (*s == c && *s != '\0')
			s++;
		fr[i] = ft_strsub((char *)s, 0, words_size(s, c));
		if (!fr[i])
			return (NULL);
		s = s + words_size(s, c);
		i++;
	}
	fr[i] = NULL;
	return (fr);
}
