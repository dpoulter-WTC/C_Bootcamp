/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoulter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 11:26:32 by dpoulter          #+#    #+#             */
/*   Updated: 2018/02/21 13:32:24 by dpoulter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*string;
	int		i;
	int		strlength;

	i = 0;
	strlength = 0;
	while(src[strlength])
		strlength++;
	string = (char *) malloc(sizeof(src) * strlength);
	while((string[i] = src[i]) != '\0' && i++ > -1)
		;
	string[i+1] = '\0';
	return (string);
}
