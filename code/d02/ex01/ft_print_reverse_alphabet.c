/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoulter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 13:53:39 by dpoulter          #+#    #+#             */
/*   Updated: 2018/02/15 13:53:49 by dpoulter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_reverse_alphabet(void)
{
	char i;

	i = 122;
	while (i >= 97)
	{
		ft_putchar(i);
		i--;
	}
	ft_putchar('\n');
	return ;
}
