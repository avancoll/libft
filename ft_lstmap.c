/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avancoll <avancoll@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:10:56 by avancoll          #+#    #+#             */
/*   Updated: 2022/10/10 18:51:39 by avancoll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*temp;

	if (!lst || !f || !del)
		return (NULL);
	temp = lst;
	while (temp)
	{
		f(temp->content);
		temp = temp->next;
	}
	new_lst = malloc(sizeof(t_list));
	if (!new_lst)
		return (NULL);
	temp = new_lst;
	while (new_lst)
	{
		new_lst = (new_lst)->next;
		del((temp)->content);
		free(temp);
		temp = new_lst;
	}
	new_lst = NULL;
	return (new_lst);
}
