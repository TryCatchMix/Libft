/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-g <amunoz-g@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 10:12:16 by amunoz-g          #+#    #+#             */
/*   Updated: 2022/06/16 20:10:36 by amunoz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	slen;
	size_t	min;

	i = 0;
	if (!s)
		return (0);
	slen = ft_strlen(s);
	if (start > slen)
		return (ft_strdup(""));
	if (slen - start < len)
		min = slen - start;
	else
		min = len;
	str = ft_calloc(min + 1, sizeof(char));
	if (!str)
		return (0);
	while (i < len && i + start < slen)
	{
		str[i] = s[start + i];
		i++;
	}
	return (str);
}
