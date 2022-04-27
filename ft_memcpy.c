/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-g <amunoz-g@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 10:08:56 by amunoz-g          #+#    #+#             */
/*   Updated: 2022/04/27 19:47:48 by amunoz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned const char	*s;
	unsigned char		*d;
	size_t				i;

	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	i = 0;
	while (dst == src || !n)
	{
		return (dst);
	}
	while (n > i)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
/*
int main () {
   const char src[50] = "Corrígeme esta";
   char dest[50];
   strcpy(dest,"Heloooo!!");
   printf("Before memcpy dest = %s\n", dest);
   memcpy(dest, src, strlen(src)+1);
   printf("After memcpy dest = %s\n", dest);

   return(0);
}
*/
