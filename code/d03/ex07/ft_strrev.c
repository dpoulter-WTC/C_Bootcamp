/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoulter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/16 13:05:03 by dpoulter          #+#    #+#             */
/*   Updated: 2018/02/16 13:52:00 by dpoulter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	char	a;
	char	b;
	int		c;
	int		l;

	l = 0;
	while (*str != '\0')
	{
		l++;
		str++;
	}
	c = 0;
	str = str - l;
	while (c < l / 2)
	{
		str = str + l - c;
		a = *str;
		str = str - l + c;
		b = *str;
		*str = a;
		str = str + l - c;
		*str = b;
		c++;
	}
	return (0);
}
