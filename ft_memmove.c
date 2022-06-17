/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-g <amunoz-g@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 14:04:06 by amunoz-g          #+#    #+#             */
/*   Updated: 2022/06/16 20:08:51 by amunoz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	char	*p_str1;
	char	*p_str2;

	if (!str1 && !str2)
		return (0);
	if (str1 < str2)
		ft_memcpy(str1, str2, n);
	else
	{
		p_str1 = (char *)str1;
		p_str2 = (char *)str2;
		while (n--)
			p_str1[n] = p_str2[n];
	}
	return (str1);
}
