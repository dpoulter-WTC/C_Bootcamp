/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoulter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/18 12:46:09 by dpoulter          #+#    #+#             */
/*   Updated: 2018/02/18 17:29:46 by dpoulter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_get_width(int size)
{
	int count;
	int i;
	int track_width_increment;
	int current_height;

	count = 7;
	i = 1;
	track_width_increment = 3;
	current_height = 4;
	while (i < size)
	{
		count += (2 * (current_height - 1));
		count += 2 * track_width_increment;
		if ((i != 0) && (i % 2 == 0))
			track_width_increment++;
		current_height++;
		i++;
	}
	return (count);
}

void	ft_draw_level(int width, int t, int level[2], int size)
{
	int blanks;
	int h;
	int i;
	int c;

	c = 1;
	h = size - 1 + (size % 2);
	blanks = (width - t) / 2;
	i = blanks;
	while (blanks-- > 0)
		ft_putchar(' ');
	ft_putchar('/');
	while (t-- > 2)
	{
		if (level[0] == size && level[1] - h <= 0 && c++ > 0)
		{
			if (t + i >= width / 2 + 1 - h / 2 && t + i <= width / 2 + 1 + h / 2)
			{
				if (size > 4 && level[1] - h == ((h / 2) * -1) && t + i == (width / 2) - (h / 2) + 2)
					ft_putchar('$');
				else
				{
					ft_putchar('|');
				}
			}
			else
				ft_putchar('*');
		}
		else
			ft_putchar('*');
	}
	ft_putchar('\\');
	ft_putchar('\n');
	return;
}

void	sastantua(int size)
{
	int floor;
	int level[2];
	int level_size;
	
	level_size = 3;
	floor = ft_get_width(size);
	level[0] = 1;
	while (level[0] <= size)
	{	
		level[1] = level[0] + 2;
		while (level[1] > 0)
		{
			ft_draw_level(floor, level_size, level, size);
			level_size += 2;
			level[1]--;
		}
		level_size += ((level[0]+ 2) * 2) + level[0] + 2; 
		level_size += (level[0] % 2 - (level[0] + 2) * 2);
		level[0]++;
	}
}

int		main(void)
{
	int i;
	
	i = 1;
	
	i = 1;
	while(i < 15)
	{
		sastantua(i);
		i++;
	}
	return (0);
}
