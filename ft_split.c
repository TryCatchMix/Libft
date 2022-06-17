/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-g <amunoz-g@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 10:13:24 by amunoz-g          #+#    #+#             */
/*   Updated: 2022/06/16 19:40:10 by amunoz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordlength(char const *s, char c, int i)
{
	int	j;

	j = i;
	while (s[j] && s[j] != c)
		j++;
	return (j - i);
}

static char	*ft_newword(char const *s, char c, int idx)
{
	char	*word;
	int		i;
	int		j;

	i = 0;
	j = ft_wordlength(s, c, idx);
	word = (char *) malloc((j + 1) * sizeof(char));
	if (!word)
		return (0);
	while (s[idx] && i < j)
		word[i++] = s[idx++];
	word[i] = '\0';
	return (word);
}

static int	ft_countw(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	str = ft_calloc((ft_countw(s, c) + 1), sizeof(char *));
	if (!str)
		return (0);
	while (s[j])
	{
		while (s[j] && s[j] == c)
			j++;
		if (s[j])
		{
			str[i] = ft_newword(s, c, j);
			i++;
		}
		while (s[j] && s[j] != c)
			j++;
	}
	return (str);
}
