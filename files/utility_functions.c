/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utility_functions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apico-su <apico-su@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 13:17:49 by apico-su          #+#    #+#             */
/*   Updated: 2021/03/15 15:35:59 by apico-su         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int it;

	it = 0;
	while (str[it])
		ft_putchar(str[it++]);
}

int		ft_strlen(char *str)
{
	int a;

	a = 0;
	while (str[a])
		a++;
	return (a);
}

char	*reverse_atoi(unsigned int num)
{
	int				x;
	unsigned int	z;
	unsigned int	a;
	char			*dest;

	dest = malloc(18);
	a = 1;
	x = 0;
	z = 0;
	while (num / a)
	{
		a = a * 10;
	}
	a = a / 10;
	while (a > 0)
	{
		dest[x] = (num / a) - (z * 10) + '0';
		z = (num / a);
		a = a / 10;
		x++;
	}
	dest[x] = ':';
	dest[x + 1] = 0;
	free(dest);
	return (dest);
}
