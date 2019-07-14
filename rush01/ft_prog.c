/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prog.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silehair <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 17:51:48 by silehair          #+#    #+#             */
/*   Updated: 2019/07/14 18:07:41 by silehair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	col_up(int *colum, int *pos, char *str);
void	col_down(int *colum, int *pos, char *str);
void	row_left(int **row, int *pos, char *str);
void	row_right(int **row, int *pos, char *str);

int		main(int argc, char **argv)
{
	int **tab;
	int x;
	int y;
	int pos;
	int i;

	x = 1;
	y = 1;
	i = 0;
	pos = 0;
	tab = (int**)malloc(sizeof(*tab) * 6);
	while (i < 6)
	{
		tab[i] = (int*)malloc(sizeof(**tab) * 6);
		i++;
	}
	if (argc == 1 || argc > 2)
		write(1, "Error\n", 6);
	else
	{
		col_up(tab[0], &pos, argv[1]);
		col_down(tab[5], &pos, argv[1]);
		row_left(tab, &pos, argv[1]);
		row_right(tab, &pos, argv[1]);
	}
}
