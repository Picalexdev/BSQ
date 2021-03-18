/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apico-su <apico-su@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 13:13:32 by apico-su          #+#    #+#             */
/*   Updated: 2021/03/18 13:35:28 by apico-su         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

char	*open_file(char *filename)
{
	int		f;
	int		ret;
	int		i;
	char	*buffer;

	if ((buffer = malloc(BUF_SIZE)) == NULL)
		return (0);
	f = open(filename, O_RDONLY);
	if (f == -1)
	{
		write(2, "map error\n", 10);
	}
	else
	{
		while ((ret = read(f, buffer, BUF_SIZE)))
		{
			buffer[ret] = '\0';
		}
		i = 0;
	}
	return (buffer);
}

char	*check_values(char *buff)
{
	int		pos;
	int		x;
	char	*values;
	char	*num;

	values = malloc(4);
	pos = 0;
	x = 0;
	while (buff[pos])
	{
		if (buff[pos] == '\n')
			x++;
		pos++;
	}
	num = reverse_atoi(x - 1);
	pos = 0;
	while (buff[pos] == num[pos])
	{
		pos++;
	}
	values[0] = buff[pos];
	values[1] = buff[pos + 1];
	values[2] = buff[pos + 2];
	values[3] = 0;
	return (values);
}

void	populate_table(char **table, char *buffer)
{
	int pos;
	int x;
	int y;

	y = 0;
	x = 0;
	pos = 0;
	while (buffer[pos])
	{
		if (buffer[pos] == '\n')
		{
			table[y][x] = 0;
			y++;
			x = -1;
		}
		else
			table[y][x] = buffer[pos];
		x++;
		pos++;
	}
	free(table);
}

int		ft_mapwidth(char *buffer)
{
	int i;
	int count;

	i = 0;
	while (buffer[i] != '\n')
	{
		i++;
	}
	i++;
	count = 0;
	while (buffer[i] != '\n')
	{
		count++;
		i++;
	}
	return (count);
}

char	**create_table(char *buffer)
{
	char	**table;
	int		x;
	int		y;
	int		z;

	table = (char **)malloc(BUF_SIZE);
	x = 0;
	y = 0;
	z = ft_mapwidth(buffer);
	while (buffer[x])
	{
		if (buffer[x] == '\n')
		{
			table[y] = (char *)malloc(z);
			y++;
		}
		x++;
	}
	populate_table(table, buffer);
	return (table);
}
