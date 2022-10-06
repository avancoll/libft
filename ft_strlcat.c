/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avancoll <avancoll@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 16:12:09 by avancoll          #+#    #+#             */
/*   Updated: 2022/10/06 17:43:27 by avancoll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	if ((!dst || !src) && dstsize == 0)
		return (NULL);
	i = 0;
	j = 0;
	while (dst[i] && i < dstsize)
		i++;
	if (dstsize > i)
	{
		while (src[j] && j < dstsize - i - 1)
		{
			dst[i + j] = src[j];
			j++;
		}
		dst[i + j] = 0;
	}
	j = 0;
	while (src[j])
		j++;
	if (dstsize < i)
		return (dstsize + j);
	return (i + j);
}
