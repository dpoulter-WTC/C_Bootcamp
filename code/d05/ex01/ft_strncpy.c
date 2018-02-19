/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoulter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 16:06:34 by dpoulter          #+#    #+#             */
/*   Updated: 2018/02/19 18:26:00 by dpoulter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char *output;
	unsigned int i;

	i = 0;
	output = dest;
	while (*src != '\0' && i < n)
	{
		*dest = *src;
		i++;
		dest++;
		src++;
	}
	while (i < n)
	{
		*dest = '\0';
		i++;
		dest++;
	}
	*dest = '\0';
	return (output);
}
