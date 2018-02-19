/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoulter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 08:36:02 by dpoulter          #+#    #+#             */
/*   Updated: 2018/02/19 16:49:05 by dpoulter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	char *output;

	output = dest;
	while ((*dest++ = *src++) != '\0')
		;
	*dest = *src;
	return (output);
}
