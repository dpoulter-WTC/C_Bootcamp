/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoulter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 19:12:45 by dpoulter          #+#    #+#             */
/*   Updated: 2018/02/22 23:25:21 by dpoulter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	rot42b(char c, int basis)
{
	c = ((c - basis) - 42);
	while (c < 0)
		c += 26;
	c += basis;
	return (c);
}

char	rotate(char c)
{
	if ('a' <= c && c <= 'z')
		return (rot42b(c, 'a'));
	else if ('A' <= c && c <= 'Z')
		return (rot42b(c, 'A'));
	else
		return (c);
}

char	*ft_rot42(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		str[i] = rotate(str[i]);
		i++;
	}
	return (str);
}
