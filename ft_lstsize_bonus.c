/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avancoll <avancoll@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:49:29 by avancoll          #+#    #+#             */
/*   Updated: 2022/10/11 13:53:40 by avancoll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		res;
	t_list	*temp;

	res = 0;
	temp = lst;
	while (temp)
	{
		temp = temp->next;
		res++;
	}
	return (res);
}
