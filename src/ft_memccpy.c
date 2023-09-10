/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguerra- <lylian.gr@protonmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 22:55:09 by lguerra-          #+#    #+#             */
/*   Updated: 2023/09/09 22:58:10 by lguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy( void *destination, const void *source,
		int ch, t_size_t maxSize)
{
	t_size_t	i;
	int			*src;

	i = -1;
	src = (int *)source;
	while (++i < maxSize && src[i] != ch)
		((int *)destination)[i] = ((int *)src)[i];
	return (destination);
}
