/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avancoll <avancoll@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:39:36 by avancoll          #+#    #+#             */
/*   Updated: 2022/10/06 11:49:04 by avancoll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	size_t	i;

	subs = malloc(sizeof(*subs) * (len + 1));
	if (!subs)
		return (0);
	i = 0;
	while (len && s[start + i])
	{
		subs[i] = s[start + i];
		i++;
	}
	return (subs);
}
