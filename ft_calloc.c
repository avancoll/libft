/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avancoll <avancoll@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 12:57:59 by avancoll          #+#    #+#             */
/*   Updated: 2022/10/05 15:18:03 by avancoll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	ft_bzero(ptr, count * size);
	return (ptr);
}

void    *calloc(size_t n_elm, size_t size)
{    
    void    *ptr;

    if (n_elm == 0 || size == 0)
        return (NULL);
    ptr = malloc(n_elm * size);
    return (ptr);
}
