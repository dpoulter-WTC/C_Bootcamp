/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoulter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 10:16:46 by dpoulter          #+#    #+#             */
/*   Updated: 2018/02/19 15:18:26 by dpoulter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
		ft_putchar(str[i++]);
}

int		main(void)
{
	char str2[200];

	char str1[200]; //= "testing this function!!!!!!!!!!!!!!!!!!";
	ft_strcpy(str1, "Testint this function");
	printf("%s", (ft_strcpy(str2, str1)));	
	return (0);
}
