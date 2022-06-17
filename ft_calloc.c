/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-g <amunoz-g@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 10:11:05 by amunoz-g          #+#    #+#             */
/*   Updated: 2022/06/16 19:01:32 by amunoz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*result;
	size_t	multi;

	multi = count * size;
	result = malloc(multi);
	if (!result || (count != 0 && multi / count != size))
		return (0);
	else
	{
		ft_bzero(result, count * size);
		return (result);
	}
}
