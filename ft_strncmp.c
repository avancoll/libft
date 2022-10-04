/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avancoll <avancoll@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:32:38 by avancoll          #+#    #+#             */
/*   Updated: 2022/10/04 14:49:44 by avancoll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned long	i;
	unsigned long	res;

	if (n == 0 || !s1 || !s2)
		return (0);
	i = 0;
	while (i < (n - 1) && (s1[i] || s2[i]) && s1[i] == s2[i])
		i++;
	res = s1[i] - s2[i];
	return (res);
}
