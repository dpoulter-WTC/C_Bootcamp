/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoulter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/17 12:36:30 by dpoulter          #+#    #+#             */
/*   Updated: 2018/02/17 16:40:24 by dpoulter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

char	ft_setchar(int i, int j, int y, int x)
{
	if (i == 0 && j == 0)
	{
		return ('/');
	}
	else if (j == 0 && i == x - 1)
	{
		return ('\\');
	}
	else if (j == y - 1 && i == x - 1 && x != 1)
	{
		return ('/');
	}
	else if (i == 0 && j == y - 1 && y != 1)
	{
		return ('\\');
	}
	else if ((i == 0) || (j == 0) || (j == y - 1) || (i == x - 1))
	{
		return ('*');
	}
	else
	{
		return (' ');
	}
}

void	rush(int x, int y)
{
	int		i;
	int		j;

	i = 0;
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			ft_putchar(ft_setchar(i, j, x, y));
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
