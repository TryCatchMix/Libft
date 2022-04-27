/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-g <amunoz-g@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 10:06:38 by amunoz-g          #+#    #+#             */
/*   Updated: 2022/04/27 19:23:17 by amunoz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_bzero(void *str, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)str)[i] = 0;
		i++;
	}
}

/*
int main () {
   char str[50];

   strcpy(str,"This is string.h library function");
   puts(str);

   ft_bzero(str,2);
   puts(str);

   return(0);
}
*/
