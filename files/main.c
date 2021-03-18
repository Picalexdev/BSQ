/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apico-su <apico-su@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 13:05:57 by apico-su          #+#    #+#             */
/*   Updated: 2021/03/18 13:06:44 by apico-su         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

void	write_tabl(char **table)
{
	int		x;
	int		y;
	char	z;

	x = 0;
	y = 1;
	while (y < 10)
	{
		x = 0;
		while (table[y][x] != 0)
		{
			z = table[y][x];
			write(1, &z, 1);
			x++;
		}
		write(1, "\n", 1);
		y++;
	}
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

int		line_count_ft(char *buffer)
{
	int x;
	int y;

	y = 0;
	x = 0;
	while (buffer[x])
	{
		if (buffer[x] == '\n')
		{
			y++;
		}
		x++;
	}
	return (y);
}

int		main(int argc, char **argv)
{
	char	*buffer;
	char	*values;
	char	**table;
	int		*final_square;
	int		line_count;

	buffer = NULL;
	table = NULL;
	line_count = line_count_ft(argv[1]);
	if (argc > 2)
		error();
	buffer = open_file(argv[1]);
	values = check_values(buffer);
	table = create_table(buffer);
	table = &table[1];
	final_square = solver_call(table, 10, values[1]);
	ft_fill(table, final_square);
	return (0);
}
