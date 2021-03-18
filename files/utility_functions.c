/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utility_functions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apico-su <apico-su@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 13:17:49 by apico-su          #+#    #+#             */
/*   Updated: 2021/03/18 13:06:21 by apico-su         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int		line_count_tab(void)
{
	int x;
	int y;
	int z;

	y = 0;
	x = 0;
	z = 0;
	while (buffer[y][x])
	{
		while (buffer[y][x])
		{
			x++;
		}
		y++;
		x = 0;
	}
	return (y);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	error(void)
{
	write(1, "Error\n", 6);
	exit(1);
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
