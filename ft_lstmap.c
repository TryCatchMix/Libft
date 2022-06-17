/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-g <amunoz-g@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 15:27:30 by amunoz-g          #+#    #+#             */
/*   Updated: 2022/06/17 16:48:17 by amunoz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*p;
	t_list	*new;

	p = 0;
	while (lst)
	{
		new = ft_lstnew(f(lst->content));
		if (!new)
		{
			while (p)
			{
				new = p->next;
				del(p->content);
				free(p);
				p = new;
			}
		}
		ft_lstadd_back(&p, new);
		lst = lst->next;
	}
	return (p);
}
