/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scrambler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoulter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 11:08:48 by dpoulter          #+#    #+#             */
/*   Updated: 2018/02/23 11:09:24 by dpoulter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_scrambler(int ***a, int *b, int *******c, int ****d)
{
	int temp_a;
	int temp_b;
	int temp_c;
	int temp_d;

	temp_a = ***a;
	temp_b = *b;
	temp_c = *******c;
	temp_d = ****d;
	*******c = temp_a;
	****d = temp_c;
	*b = temp_d;
	***a = temp_b;
}
