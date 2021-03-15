/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cache.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apico-su <apico-su@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 13:06:50 by apico-su          #+#    #+#             */
/*   Updated: 2021/03/15 13:46:45 by apico-su         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int		mallcmatrix(char **cmatrix, int col, int row)
{
	int		i;
	int		**cache;
	//int		**matrix;

	i = 0;
	cache = malloc(row * sizeof(int *));
	while (i < row)
	{
		cache[i] = malloc(col * sizeof(int ));
		i++;
	}
	i = 0;
	cmatrix = malloc(row * sizeof(char *));
	while (i < row)
	{
		cmatrix[i] = malloc(col * sizeof(char));
		i++;
	}
	return (0);
}

char	*ft_mallmatrix(int **matrix, int row, int col)
{
	int		i;
	//int		**cache;
	//char	**cmatrix;

	i = 0;
	matrix = malloc(row * sizeof(int *));
	while (i < row)
	{
		matrix[i] = malloc(col * sizeof(int ));
		i++;
	}
	return (0);
}
