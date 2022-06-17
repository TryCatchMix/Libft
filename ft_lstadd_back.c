/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-g <amunoz-g@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 13:04:54 by amunoz-g          #+#    #+#             */
/*   Updated: 2022/06/17 16:16:26 by amunoz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*node;
	t_list	*last;

	if (!(*lst))
		*lst = new;
	else
	{
		last = ft_lstlast(*lst);
		if (new)
		{
			node = last;
			node->next = new;
		}
	}
}
