/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-g <amunoz-g@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 17:12:32 by amunoz-g          #+#    #+#             */
/*   Updated: 2022/04/27 18:42:02 by amunoz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int c)
{
	int	i;
	int	flag;

	flag = 0;
	i = 0;
	while (((char *)str)[i] != '\0' && flag == 0)
	{
		if (((char *)str)[i] == c)
		{
			return ((char *)&str[i]);
			flag = 1;
		}
		i++;
	}
	if (c == '\0')
		return ((char *)&str[i]);
	return (NULL);
}
