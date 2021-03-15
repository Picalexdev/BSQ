/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apico-su <apico-su@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 13:13:32 by apico-su          #+#    #+#             */
/*   Updated: 2021/03/15 14:46:39 by apico-su         ###   ########.fr       */
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

values determine_values(char *buff)
{
	int pos;
	int x;

	while (buff[pos])
	{
		if (buff[pos] == '\n')

		pos++;
	}
}
