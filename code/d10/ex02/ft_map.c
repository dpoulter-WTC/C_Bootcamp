/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoulter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 13:19:56 by dpoulter          #+#    #+#             */
/*   Updated: 2018/02/26 14:00:59 by dpoulter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int *out;
	int i;

	i = 0;
	out = (int *)malloc(sizeof(int) * length);
	while (length-- && i++ > -1)
		*out[i] = f(*tab++);
	return (out);
}
