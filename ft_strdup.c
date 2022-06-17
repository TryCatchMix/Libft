/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-g <amunoz-g@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 10:10:30 by amunoz-g          #+#    #+#             */
/*   Updated: 2022/06/16 19:44:06 by amunoz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*d;
	char	*po_s1;
	size_t	i;

	po_s1 = (char *)s1;
	i = 0;
	d = (char *)malloc(ft_strlen(po_s1) + 1);
	if (d == 0)
		return (0);
	while (po_s1[i] != '\0')
	{
		d[i] = po_s1[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}
