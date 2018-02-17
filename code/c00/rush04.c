/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoulter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/17 12:36:30 by dpoulter          #+#    #+#             */
/*   Updated: 2018/02/17 14:51:37 by dpoulter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	ft_setchar(int i, int j, int x, int y)
{
	if (i == 0 && j == 0)
	{
		return ('A');
	}else if (j == 0 && i == x - 1)
	{
		return ('C');
	}else if(j == y - 1 && i == x - 1 && x != 1) 
	{
		return ('A');
	}
	else if (i == 0 && j == y -1 && y != 1)
	{
		return ('C');
	}
	else if ((i == 0) || (j == 0) || (j == y - 1) || (i == x - 1))
	{
		return ('B');
	}
	else
	{
		return (' ');
	}
}



void	rush(int x, int y)
{
	char	grid[x][y];
	int		i;
	int		j;

	i = 0;
	while (i < x)
	{
		j = 0;
		while (j < y)
		{
			grid[i][j] = ft_setchar(i, j, x, y);
			printf("%c", grid[i][j]);
			j++;
		}
		printf("%c", '\n');
		i++;
	}
}

int		main(void)
{
	rush(1, 1);
	return (0);
}
