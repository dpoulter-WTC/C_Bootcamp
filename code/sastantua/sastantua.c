/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoulter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/18 17:31:59 by dpoulter          #+#    #+#             */
/*   Updated: 2018/02/19 18:38:53 by dpoulter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

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

void	ft_door(int a[6], int l[2])
{
	if (l[0] == a[2] && l[1] - a[4] <= 0)
	{
		if (a[1] + a[5] >= a[0] / 2 + 1 - a[4] / 2)
		{
			if (a[1] + a[5] <= a[0] / 2 + 1 + a[4] / 2)
			{
				if (a[2] > 4 && l[1] - a[4] == a[4] / 2 * -1)
				{
					if (a[1] + a[5] == a[0] / 2 - a[4] / 2 + 2)
						ft_putchar('$');
					else
						ft_putchar('|');
				}
				else
					ft_putchar('|');
			}
			else
				ft_putchar('*');
		}
		else
			ft_putchar('*');
	}
	else
		ft_putchar('*');
}

void	ft_draw_level(int w, int t, int l[2], int s)
{
	int blanks;
	int h;
	int i;
	int a[6];

	h = s - 1 + (s % 2);
	blanks = (w - t) / 2;
	i = blanks;
	while (blanks-- > 0)
		ft_putchar(' ');
	ft_putchar('/');
	while (t-- > 2)
	{
		a[0] = w;
		a[1] = t;
		a[2] = s;
		a[3] = blanks;
		a[4] = h;
		a[5] = i;
		ft_door(a, l);
	}
	ft_putchar('\\');
	ft_putchar('\n');
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
		level_size += ((level[0] + 2) * 2) + level[0] + 2;
		level_size += (level[0] % 2 - (level[0] + 2) * 2);
		level[0]++;
	}
}
