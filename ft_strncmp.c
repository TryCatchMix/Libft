/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-g <amunoz-g@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 17:40:15 by amunoz-g          #+#    #+#             */
/*   Updated: 2022/04/27 18:04:55 by amunoz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(const char *str, const char *str2, size_t c)
{
	size_t	i;
	unsigned diff;

	diff = 0;
	i = 0;
	while ((str[i] != '\0') && (str2[i] != '\0')
		&& (diff == 0) && (i < c))
	{
		diff = (unsigned char)str[i] - (unsigned char)str2[i];
		i++;
	}
	if ((dif == 0) && (i z c))
		diff = (unsigned char)str[i] - (unsigned char)str2[i];
	return (diff);
}
