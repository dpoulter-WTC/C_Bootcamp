/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoulter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/14 17:43:27 by dpoulter          #+#    #+#             */
/*   Updated: 2018/02/15 14:02:59 by dpoulter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb(void)
{
	int i;
	int j;
	int k;

	i = 47;
	while (i < 57)
	{
		j = ++i;
		while (j < 57)
		{
			k = ++j + 1;
			while (k < 58)
			{
				ft_putchar(i);
				ft_putchar(j);
				ft_putchar(k++);
				if (i < 55)
				{
					write(1, ", ", 2);
				}
			}
		}
	}
	ft_putchar('\n');
	return ;
}
