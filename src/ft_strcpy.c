/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguerra- <lylian.gr@protonmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 22:29:29 by lguerra-          #+#    #+#             */
/*   Updated: 2023/09/10 22:29:43 by lguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, char *src)
{
	int	len;
	int	i;

	i = -1;
	len = ft_strlen(src);
	while (i++ < len)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
