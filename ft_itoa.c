/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avancoll <avancoll@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 13:46:14 by avancoll          #+#    #+#             */
/*   Updated: 2022/10/11 13:53:25 by avancoll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_size(int n)
{
	int	i;

	if (n == 0)
		return (1);
	i = 0;
	if (n < 0)
		i++;
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

void	nb_to_char(long n, int i, char *res, int size)
{
	i++;
	if (n < 0)
	{
		n = -n;
		i--;
	}
	if (n >= 10)
	{
		nb_to_char(n / 10, i, res, size);
		n = n % 10;
	}
	if (n < 10)
		res[size - i - 1] = n + '0';
	res[size] = '\0';
}

char	*ft_itoa(int n)
{
	char	*res;
	int		i;
	int		size;

	res = malloc(sizeof(*res) * (ft_size(n) + 1));
	if (!res)
		return (NULL);
	i = -1;
	size = ft_size(n);
	if (n < 0)
	{
		res[++i] = '-';
	}
	nb_to_char(n, i, res, size);
	return (res);
}
