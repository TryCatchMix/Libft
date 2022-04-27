/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-g <amunoz-g@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 12:08:06 by amunoz-g          #+#    #+#             */
/*   Updated: 2022/04/27 19:30:46 by amunoz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*s;
	size_t			i;

	i = 0;
	s = b;
	while (i < len)
	{
		s[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

/*
int main () {
   char str[50];

   strcpy(str,"This is string.h library function");
   puts(str);

   ft_memset(str,'*',10);
   puts(str);
   
   return(0);
}
*/
