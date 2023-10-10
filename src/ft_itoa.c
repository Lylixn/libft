/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logname <logname@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 09:03:24 by logname           #+#    #+#             */
/*   Updated: 2023/10/10 09:03:27 by logname          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_itoa(int n)
{
    char    *str;
    int     len;
    int     sign;
    int     tmp;

    len = 1;
    sign = 0;
    tmp = n;
    while (tmp /= 10)
        len++;
    if (n < 0)
    {
        sign = 1;
        len++;
    }
    if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
        return (NULL);
    str[len] = '\0';
    while (len--)
    {
        str[len] = (n % 10) * (sign ? -1 : 1) + '0';
        n /= 10;
    }
    if (sign)
        str[0] = '-';
    return (str);
}