/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoulter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 09:03:05 by dpoulter          #+#    #+#             */
/*   Updated: 2018/02/19 09:04:48 by dpoulter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example using strcpy by TechOnTheNet.com */

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[])
{
    /* Create an example variable capable of holding 50 characters */
    char example[5];

    /* Copy the string "TechOnTheNet.com knows strcpy!" into the example variable */
    strcpy (example, "TechOnTheNet.com knows strcpy!");

    /* Display the contents of the example variable to the screen */
    printf("%s\n", example);

    return 0;
}
