/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoulter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 20:31:51 by dpoulter          #+#    #+#             */
/*   Updated: 2018/02/15 21:01:30 by dpoulter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 void	ft_ultimate_div_mod(int *a, int *b)
{
	int i = *a;
	int j = *b;
	*a = i / j;
	*b = i % j;
}
