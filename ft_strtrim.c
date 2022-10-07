/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avancoll <avancoll@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:54:40 by avancoll          #+#    #+#             */
/*   Updated: 2022/10/07 12:12:09 by avancoll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_malloc_size(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s1[i] && ft_is_set(s1[i], set))
		i++;
	j = ft_strlen(s1) - 1;
	while (j > 0 && ft_is_set(s1[j], set))
		j--;
	if (i > j)
		return (1);
	return (j - i + 1);
}

char	*ft_strtrim2(char	const *s1, char const *set, char *s1_cpy)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	while (s1[i] && ft_is_set(s1[i], set))
		i++;
	j = ft_strlen(s1) - 1;
	while (j > 0 && ft_is_set(s1[j], set))
		j--;
	k = 0;
	while (i <= j)
	{
		s1_cpy[k] = s1[i];
		i++;
		k++;
	}
	s1_cpy[k] = '\0';
	return (s1_cpy);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s1_cpy;
	size_t	size;

	if (!s1 || !set)
		return (NULL);
	if (!s1[0] || !set[0])
		return (ft_strdup(s1));
	size = ft_malloc_size(s1, set);
	s1_cpy = malloc(sizeof(*s1_cpy) * (size + 1));
	if (!s1_cpy)
		return (0);
	return (ft_strtrim2(s1, set, s1_cpy));
}
