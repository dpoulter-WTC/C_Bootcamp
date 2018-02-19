/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoulter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 16:06:34 by dpoulter          #+#    #+#             */
/*   Updated: 2018/02/19 16:46:54 by dpoulter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char			*output;
	unsigned int	i;

	i = 0;
	output = dest;
	while (*src != '\0')
	{
		if (i < n)
			*dest = *src;
		else
			*dest = '\0';
		src++;
		dest++;
		i++;
	}
	return (&dest);
}
