/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_checking.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoulter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 17:20:58 by dpoulter          #+#    #+#             */
/*   Updated: 2018/02/25 11:08:12 by dpoulter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int	check_line(char **tab, char nb, int x)
{
	int i;
	
	i = 0;
	while (i < 9)
	{
		if (tab[x][i] == nb)
			return (0);
		i++;
	}
	return (1);
}

int	check_column(char **tab, char nb, int y)
{
	int	i;
	
	i = 1;
	while (i <= 9)
	{
		if (tab[i][y] == nb)
			return (0);
		i++;
	}
	return (1);
}

int	check_block(char **tab, int x, int y, char nb)
{
	int i;
	int j;

	i = -1;
	if (x <= 3)
		x = 1;
	else if (x <= 6)
		x = 4;
	else if (x <= 9)
		x = 7;
	y = y - (y % 3);
	while (++i < 3)
	{
		j = -1;
		while (++j < 3)
		{
			if (tab[x][y] == nb)
				return (0);
			y++;
		}
		y = y - 3;
		x++;
	}
	return (1);
}

int		check_length(char *c)
{
	int i;

	i = 0;
	while (c[i])
		i++;
	if (i != 8)
		return (0);
	return (1);
}

int		check_input(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	if (argc != 10)
	{
		return (0);
	}
	while (argv[i])
	{
		j = 0;
		if (check_length(argv[i]))
				return (0);
		while (argv[i][j])
		{
			if (!((argv[i][j] >= '1' && argv[i][j] <= '9') || argv[i][j] == '.'))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
