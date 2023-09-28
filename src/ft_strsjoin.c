/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguerra- <lylian.gr@protonmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 22:42:34 by lguerra-          #+#    #+#             */
/*   Updated: 2023/09/28 22:51:06 by lguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsjoin(const char *str, ...)
{
	va_list	ap;
	char	*res;
	char	*tmp;

	va_start(ap, str);
	res = ft_strdup(str);
	tmp = va_arg(ap, char *);
	while (tmp)
	{
		res = ft_strjoin(res, tmp);
		tmp = va_arg(ap, char *);
	}
	va_end(ap);
	return (res);
}