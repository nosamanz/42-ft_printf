/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozcan <oozcan@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 16:47:27 by oozcan            #+#    #+#             */
/*   Updated: 2022/03/08 16:47:46 by oozcan           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int main()
{
    int             as;
    int             a = 121241241;
    char            s[] = "_Hello_World_";
    char            v = 'a';
    char            *noso;
    static char     *c;
    unsigned int    xx = 463667312;
    unsigned int    xc = 126467124;
    unsigned int    hhh = 4294967295;
    noso = ft_strdup("asfghsgusjghsdg");
    as = ft_printf("%d, %s, %c, %s, %u, %x, %X,%%%%%%, %d", a, s, v, c, hhh, xc, xx, noso);
    printf("\n\n%d\n\n",as);
    as = printf("%d, %s, %c, %s, %u, %x, %X,%%%%%%, %d", a, s, v, c, hhh, xc, xx, noso);
    printf("\n\n%d\n\n",as);
}
