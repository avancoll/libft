/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avancoll <avancoll@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 15:42:18 by avancoll          #+#    #+#             */
/*   Updated: 2022/10/05 16:25:04 by avancoll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*empty;

	i = 0;
	j = 0;
	empty = "";
	if (haystack == empty && needle == empty)
		return ("");
	if (!len)
		return (0);
	if (needle == empty)
		return ((char *)haystack);
	while (haystack[i] && i <= len)
	{
		while (haystack[i + j] == needle[j] && haystack[i + j])
				j++;
		if (needle[j] == '\0')
			return ((char *)haystack + i);
		i++;
		j = 0;
	}
	return (0);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			while (needle[j] && needle[j] == haystack[i + j] && (i + j) < len)
				j++;
			if (!needle[j])
				return ((char *)haystack + i);
		}
		i++;
	}
	return (NULL);
}
