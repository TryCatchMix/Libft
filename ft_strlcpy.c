/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-g <amunoz-g@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 14:16:19 by amunoz-g          #+#    #+#             */
/*   Updated: 2022/04/26 14:20:58 by amunoz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	len = 0;
	if (src != NULL)
	{
		len = ft_strlen(src);
		if (dst != NULL && dstsize != 0)
		{
			i = 0;
			while ((i < len) && i < (dstsize - 1))
			{
				dst[i] = src[i];
				i++;
			}
			dst[i] = '\0';
		}
	}
	return (len);
}
