/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoulter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 13:43:17 by dpoulter          #+#    #+#             */
/*   Updated: 2018/02/21 15:13:14 by dpoulter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		*ft_range(int min, int max)
{
	int *i;
	int j;

	j = 0;
	if (max <= min)
		return (null);
	i = (int *) malloc (sizeof(*i) * (max - min));
	while (min < max)
	{
		i[j]= min;
		min++;
		i++:
	}
	return (i);
}
