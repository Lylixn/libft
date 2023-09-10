/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguerra- <lylian.gr@protonmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 22:26:24 by lguerra-          #+#    #+#             */
/*   Updated: 2023/09/10 22:27:21 by lguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp( const void *pointer1, const void *pointer2, t_size_t size )
{
	t_size_t				i;
	unsigned char			*pointer1_casted;
	unsigned char			*pointer2_casted;

	i = 0;
	pointer1_casted = (unsigned char *)pointer1;
	pointer2_casted = (unsigned char *)pointer2;
	while (i < size)
	{
		if (pointer1_casted[i] != pointer2_casted[i])
			return (pointer1_casted[i] - pointer2_casted[i]);
		i++;
	}
	return (0);
}
