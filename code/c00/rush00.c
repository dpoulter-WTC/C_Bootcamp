/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoulter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/17 09:30:05 by dpoulter          #+#    #+#             */
/*   Updated: 2018/02/17 11:41:29 by dpoulter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	rush(int x, int y)
{
	char 	grid[x][y];
	int 	i;
	int		j;

	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			if ((i == 0 || i == x - 1) && (j == 0 || j == y - 1))
			{
				grid[i][j] = '0';
			}
			else if ()
			{
				grid[i][j] = '.';
			}
			printf("%c", grid[i][j]);
		}
		printf("%c", '\n');
	}
}

int		main(void)
{
	rush(5, 5);
	return (0);
}
