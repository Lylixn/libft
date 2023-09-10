/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguerra- <lylian.gr@protonmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 22:47:11 by lguerra-          #+#    #+#             */
/*   Updated: 2023/09/09 22:47:11 by lguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy( void *destination, const void *source, t_size_t size )
{
	t_size_t	i;

	i = -1;
	while (++i < size)
		((int *)destination)[i] = ((int *)source)[i];
	return (destination);
}
