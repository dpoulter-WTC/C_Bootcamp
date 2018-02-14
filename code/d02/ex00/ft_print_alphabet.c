/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoulter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/14 12:31:58 by dpoulter          #+#    #+#             */
/*   Updated: 2018/02/14 13:52:06 by dpoulter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
	return ;
}

void	ft_print_alphabet(void)
{
	char i;

	i = 97;
	while (i < 123)
	{
		ft_putchar(i);
		i++;
	}
	ft_putchar('\n');
	return ;
}

int		main(void)
{
	ft_print_alphabet();
	return (0);
}
