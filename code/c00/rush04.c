/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoulter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/17 12:36:30 by dpoulter          #+#    #+#             */
/*   Updated: 2018/02/17 15:21:25 by dpoulter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

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
	int		i;
	int		j;

	i = 0;
	while (i < x)
	{
		j = 0;
		while (j < y)
		{
			ft_putchar(ft_setchar(i, j, x, y));
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
