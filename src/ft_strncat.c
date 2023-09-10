/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguerra- <lylian.gr@protonmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 22:38:24 by lguerra-          #+#    #+#             */
/*   Updated: 2023/09/10 22:38:24 by lguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, char *src, t_size_t nb)
{
	t_size_t	i;
	t_size_t	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j] && nb > 0)
	{
		dest[i++] = src[j++];
		nb--;
	}
	dest[i] = '\0';
	return (dest);
}