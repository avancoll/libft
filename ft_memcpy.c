/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avancoll <avancoll@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:03:31 by avancoll          #+#    #+#             */
/*   Updated: 2022/10/04 14:47:27 by avancoll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int	i;

	if (!dst || !src || ft_strlen(dst) < n)
		return (0);

	i = 0;
	while (i < n)
	{

	}
	return (dst);
}

#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	dst1[] = "bonjour";
	//char	dst2[] = "bonjour";
	char	src[] = "abc";

	printf("%s\n", memcpy(dst1, src, 2));
	//printf("%s\n", ft_memcpy(dst2, src, 8));
}
