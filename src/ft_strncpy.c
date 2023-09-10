/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguerra- <lylian.gr@protonmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 22:37:26 by lguerra-          #+#    #+#             */
/*   Updated: 2023/09/10 22:37:26 by lguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, char *src, t_size_t n)
{
	t_size_t	len;
	t_size_t	i;

	i = -1;
	len = ft_strlen(src);
	while (i++ < n && i < len)
		dest[i] = src[i];
	while (i++ < n)
		dest[i] = '\0';
	return (dest);
}