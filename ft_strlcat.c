/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-g <amunoz-g@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 17:20:01 by amunoz-g          #+#    #+#             */
/*   Updated: 2022/06/16 19:52:47 by amunoz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	sizdst;
	size_t	sizsrc;
	size_t	count;

	sizdst = ft_strlen(dst);
	sizsrc = ft_strlen(src);
	if (dstsize <= sizdst || dstsize == 0)
		return (sizsrc + dstsize);
	count = sizdst;
	while (*src != '\0' && count < (dstsize - 1))
		*(dst + count++) = *src++;
	*(dst + count) = '\0';
	return (sizdst + sizsrc);
}
