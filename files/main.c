/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apico-su <apico-su@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 13:05:57 by apico-su          #+#    #+#             */
/*   Updated: 2021/03/15 14:37:22 by apico-su         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int		main(int argc, char **argv)
{
	char	*buffer;

	buffer = NULL;
	if (argc > 2)
		error();
	buffer = open_file(argv[1]);
	printf("%s", buffer);
	determine_values
	return (0);
}
