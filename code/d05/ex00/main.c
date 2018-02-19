/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoulter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 10:16:46 by dpoulter          #+#    #+#             */
/*   Updated: 2018/02/19 10:50:23 by dpoulter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i++] != '\0')
		ft_putchar(str[i]);
}

int		main(void)
{
	char str1[] = "Test";
	char str2[] = "Testing this";
	ft_putstr(ft_strcpy(str2, str1));	
	return (0);
}
