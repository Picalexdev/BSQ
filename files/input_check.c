/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apico-su <apico-su@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 13:13:32 by apico-su          #+#    #+#             */
/*   Updated: 2021/03/15 17:19:39 by apico-su         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

void	error(void)
{
	write(1, "Error\n", 6);
	exit(1);
}

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

char *check_values(char *buff)
{
	int pos;
	int x;
	char *values;
	char *num;

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

char **create_table(char *buffer)
{
	char **table;
	int pos;
	int x;
	int y;

	table = NULL;
	pos = 0;
	x = 0;
	y = 0;
	printf("%s", buffer);
	while (buffer[pos] != '\n')
		pos++;
	pos++;
	printf("%d", pos);
	while (buffer[pos + 1])
	{
		if (buffer[pos] != '\n')
			table[y][x] = buffer[pos];
		else
		{
			x = -1;
			y++;
		}
		printf("%s", table[1]);
		pos++;
		x++;
	}
	return (table);
}