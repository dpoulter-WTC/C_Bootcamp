/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoulter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/18 08:20:02 by dpoulter          #+#    #+#             */
/*   Updated: 2018/02/18 12:45:43 by dpoulter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		count += (2 * (current_height - 1)) + (2 * track_width_increment);
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
	while (1 < size)
	{
		height += current_height;
		current_height++;
		i++;
	}
	return (height);
}

void	ft_printline(char arr[], int height, int length, int width)
{
	int c;
	int middle;
	int k;
	int i;

	i = length;
	c = 0;
	while (c < width)
	{
		k = -1;
		middle = (width / 2) - (length / 2);
		while (k++ < middle)
			arr[c] = ' ';
		if (k == middle)
			arr[c] = '/';
		while (i-- > 0)
			arr[c] = '*';
		if (k == middle + length)
			arr[c] = '\\';
		while (k > 0)
		{
			arr[c] = ' ';
			k--;
		}
		c++;
	}
}

void	ft_check_door(int width, int height, int size)
{
	char arr[width];
	int length;
	int door;
	int c;

	c = -1;
	door = size - 1 + (size % 2);
	length = 3;
	while (height > 0)
	{
		if (height <= door)
		{
			ft_printline(arr, height, length, width);
		}
		else
		{
			ft_printline(arr, height, length, width);
		}
		while (c++ < width)
			ft_putchar(arr[c]);
	}
}

void	sastantua(int size)
{
	int height;
	int width;

	height = ft_get_height(size);
	width = ft_get_width(size);
	ft_check_door(width, height, size);
}

int		main(void)
{
	sastantua(2);
	return (0);
}
