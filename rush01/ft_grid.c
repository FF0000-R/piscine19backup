/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_grid.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silehair <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 15:54:00 by silehair          #+#    #+#             */
/*   Updated: 2019/07/14 17:52:52 by silehair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	col_up(int *colum, int *pos, char *str)
{
	int x;

	x = 1;
	while (x <= 4)
	{
		colum[x] = str[*pos] - 48;
		x++;
		*pos = *pos + 2;
	}
}

void	col_down(int *colum, int *pos, char *str)
{
	int x;

	x = 1;
	while (x <= 4)
	{
		colum[x] = str[*pos] - 48;
		x++;
		*pos = *pos + 2;
	}
}

void	row_left(int **row, int *pos, char *str)
{
	int y;

	y = 1;
	while (y <= 4)
	{
		row[y][0] = str[*pos] - 48;
		y++;
		*pos = *pos + 2;
	}
}

void	row_right(int **row, int *pos, char *str)
{
	int y;

	y = 1;
	while (y <= 4)
	{
		row[y][5] = str[*pos] - 48;
		y++;
		*pos = *pos + 2;
	}
}
