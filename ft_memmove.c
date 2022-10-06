/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avancoll <avancoll@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 16:10:55 by avancoll          #+#    #+#             */
/*   Updated: 2022/10/06 11:48:30 by avancoll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*ptr1;
	const unsigned char	*ptr2;

	if (!dst && !src && len)
		return (0);
	ptr1 = (unsigned char *)dst;
	ptr2 = (const unsigned char *)src;
	i = -1;
	if (dst >= src)
	{
		while (++i < len)
			ptr1[len - i - 1] = ptr2[len - i - 1];
	}
	else
	{
		while (++i < len)
			ptr1[i] = ptr2[i];
	}
	return (dst);
}
