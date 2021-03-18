/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apico-su <apico-su@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 13:20:30 by apico-su          #+#    #+#             */
/*   Updated: 2021/03/18 12:36:55 by apico-su         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_H
# define LIB_H
# define BUF_SIZE 4096
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <string.h>

struct	s_size
{
	int x;
	int y;
} size;

int		ft_strlen(char *str);
void	ft_putstr(char *str);
void	ft_putchar(char c);
char	*reverse_atoi(unsigned int num);
int		mallcmatrix(char **cmatrix, int col, int row);
char	*ft_mallmatrix(int **matrix, int row, int col);
char	*open_file(char *filename);
char	*check_values(char *buff);
char	**create_table(char *buffer);
int		*solver_call(char **table, int line_num, char obst);
void	ft_fill(char **table, int *tab);
void	write_tabl(char **table);
void	error();
#endif
