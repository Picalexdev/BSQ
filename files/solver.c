/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apico-su <apico-su@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 10:23:36 by apico-su          #+#    #+#             */
/*   Updated: 2021/03/18 13:28:45 by apico-su         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

void	ft_fill(char **table, int *tab)
{
	int posy;
	int posx;
	int size;
	int x;
	int y;

	posy = tab[0];
	posx = tab[1];
	size = tab[2];
	y = posy;
	x = posx;
	while (posy < size + y)
	{
		posx = x;
		while (posx < size + x)
		{
			table[posy][posx] = 'x';
			posx++;
		}
		posy++;
	}
	write_tabl(table);
}

int		check_solution(int y, int x, int square, char **table, char obst, int lines)
{
	int squarex;
	int squarey;

	squarex = square + x;
	squarey = square + y;
	while (table[y][x] != obst && y < squarey && y < lines)
	{
		x = squarex - square;
		while (table[y][x] != obst && x < squarex && table[y][x] != 0)
		{
			x++;
		}
		if (table[y][x] != obst)
			y++;
	}
	if (x == squarex && y == squarey)
		square = check_solution(y, x, square + 1, lines);
	return (square - 1);
}

int		*solver_call(char **table, int line_num, char obst)
{
	int y;
	int x;
	int *square;
	int values[3];
	int prueba;

	y = 0;
	x = 0;
	values[0] = 0;
	values[1] = 0;
	values[2] = 1;
	square = values;
	line_num = 10;
	while (y < line_num)
	{
		while (table[y][x] != 0)
		{
			prueba = check_solution(y, x, 1, table, obst, line_num - 1);
			if (prueba > values[2])
			{
				values[0] = y;
				values[1] = x;
				values[2] = prueba;
			}
			x++;
		}
		x = 0;
		y++;
	}
	write_tabl(table);
	return (square);
}
