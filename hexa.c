/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozcan <oozcan@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 16:00:17 by oozcan            #+#    #+#             */
/*   Updated: 2022/03/06 16:00:34 by oozcan           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main ()
{
    int n = 255;

    /* Upper and lower case. */

    printf ("%X hexadecimal with upper case letters.\n", n);
    printf ("%x hexadecimal with lower case letters.\n", n);
    return 0;
}
