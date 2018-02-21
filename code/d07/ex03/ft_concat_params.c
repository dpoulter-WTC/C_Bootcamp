/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoulter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 16:45:01 by dpoulter          #+#    #+#             */
/*   Updated: 2018/02/21 18:21:10 by dpoulter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

int		ft_strlen(char *str)
{
	int a;

	a = 1;
	while (*str != '\0')
	{
		a++;
		str++;
	}
	return (a);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	char	*c;
	int		length;

	j = 1;
	length = 0;
	while (j++ < argc)
		length += ft_strlen(*argv[j]) + 1;
	c = (char *) malloc(sizeof(argv) * length);
	length = 0;
	while (j < argc)
	{
		i = 0;
		while (argv[j][i])
		{
			c[length] = (argv[j][i]);
			i++;
			length++;
		}
		length++;
		c[length++] = '\n';
		j++;
	}
	return (c);
}

int		main(int argc, char **argv)
{
	ft_putstr(*ft_concat_params(argc, argv));
	return (0);
}
