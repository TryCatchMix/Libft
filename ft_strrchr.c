/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-g <amunoz-g@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 10:10:56 by amunoz-g          #+#    #+#             */
/*   Updated: 2022/04/27 18:43:46 by amunoz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int c)
{
	int	longitud;
	int	flag;

	flag = 0;
	longitud = ft_strlen(str);
	while (longitud >= 0 && flag == 0)
	{
		if (str[longitud] == c)
		{
			return ((char *)&str[longitud]);
			flag = 1;
		}
		longitud--;
	}
	return (NULL);
}
