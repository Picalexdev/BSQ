/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apico-su <apico-su@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 13:05:57 by apico-su          #+#    #+#             */
/*   Updated: 2021/03/15 16:20:18 by apico-su         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int		main(int argc, char **argv)
{
	char	*buffer;
	char 	*values;
	char	**table;
	int x;

	x = 0;
	buffer = NULL;
	table = NULL;
	if (argc > 2)
		error();
	buffer = open_file(argv[1]);
	values  = check_values(buffer);
	table = create_table(buffer);
	while (table[x])
	{
		printf("%s", table[x]);
		x++;
	}
	
	return (0);
}
