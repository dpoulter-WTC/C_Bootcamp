/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoulter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/17 17:51:46 by dpoulter          #+#    #+#             */
/*   Updated: 2018/02/17 23:14:38 by dpoulter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c);
void	ft_print_line(int width, int length, int height, int size);
int		ft_door(int size);

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

int		ft_get_height(int size)
{
	int height;
	int current_height;
	int i;

	i = 0;
	current_height = 3;
	height = 0;
	while(i < size)
	{
		height += current_height;
		current_height++;
		i++;
	}
	return (height);
}

void	sastantua(int size)
{
	int width;
	int height;

	height = ft_get_height(size);
	width = ft_get_width(size) - 2;
	ft_print_line(width, 1, height, size);
	ft_putchar('\n');
	printf("%d",width);

}

void	ft_print_line(int width, int length, int height, int size)
{
	int i;
	int k;
	int backwards;
	int middle;
	int increase_size;
	int h;
	int inc;
	int door;

	inc = 2;
	increase_size = 3;
	h = 0;
	door = ft_door(size);
	while(height >  0)
	{
		if(height <= door)
		{
		while(k < middle)
		{
			ft_putchar (' ');
			k++;
		}
		ft_putchar('t');
		while(i > 0)
		{
			ft_putchar ('*');
			i--;
		}
		ft_putchar('\\');
		while(k > 0)
		{
			ft_putchar (' ');
			k--;
		}
		height--;
		length = (length + 2);
		ft_putchar('\n');
		h++;
		}else
		{
		if (h == increase_size)
		{
			increase_size++;
			h = 0;
			if (increase_size % 2 == 0)
			{
				inc = inc + 2;
			}
			length += inc;
		}
		k = 0;
		i = length;
		middle = (width / 2) - (length / 2);
		while(k < middle)
		{
			ft_putchar (' ');
			k++;
		}
		ft_putchar('/');
		while(i > 0)
		{
			ft_putchar ('*');
			i--;
		}
		ft_putchar('\\');
		while(k > 0)
		{
			ft_putchar (' ');
			k--;
		}
		height--;
		length = (length + 2);
		ft_putchar('\n');
		h++;
		}
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
int		ft_door(int size)
{
	size = size - 1 + (size % 2);
	return (size);
}


int		main(void)
{
	sastantua(6);
	return (0);
}

/*
if (i - 2 - stage % 2 == doorsize / 2)
	ft_putchar('$');
else
	ft_putchar('|');
	*/
