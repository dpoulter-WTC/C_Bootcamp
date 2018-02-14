/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoulter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/14 14:46:50 by dpoulter          #+#    #+#             */
/*   Updated: 2018/02/14 16:43:50 by dpoulter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void);

void	ft_putchar(char c)
{
	write(1, &c, 1);
	return ;
}

void	ft_print_reverse_alphabet(void)
{
	char i;

	i = 122;
	while (i > 96)
	{
		ft_putchar(i);
		i--;
	}
	ft_putchar('\n');
	return ;
}

int		main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
