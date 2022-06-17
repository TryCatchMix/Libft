/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-g <amunoz-g@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 13:22:07 by amunoz-g          #+#    #+#             */
/*   Updated: 2022/06/17 16:48:52 by amunoz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*aux;

	if (*lst)
	{
		while ((*lst) != 0)
		{
			aux = (*lst)->next;
			ft_lstdelone(*lst, del);
			(*lst) = aux;
		}
	}
}
