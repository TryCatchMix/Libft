/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-g <amunoz-g@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 10:12:46 by amunoz-g          #+#    #+#             */
/*   Updated: 2022/06/16 18:36:54 by amunoz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check(char const *s1, char c)
{
	int	i;

	i = 0;
	while (s1[i])
		if (s1[i++] == c)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	char	*result;
	size_t	len;
	size_t	j;

	i = 0;
	j = 0;
	if (!s1 || !set)
		return (0);
	len = ft_strlen(s1);
	while (check(set, s1[i]) && s1[i])
		i++;
	if (i == len)
		return (ft_strdup(""));
	while (check(set, s1[len - 1]) && (len - 1))
		len--;
	if (len < i)
		len = i;
	result = malloc(len - i + 1);
	if (!result)
		return (0);
	while (i < len)
		result[j++] = s1[i++];
	result[j] = '\0';
	return (result);
}
