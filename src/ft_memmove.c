/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguerra- <lylian.gr@protonmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 22:19:21 by lguerra-          #+#    #+#             */
/*   Updated: 2023/09/10 22:19:21 by lguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *destination, const void *source, t_size_t size)
{
	t_size_t	i;

	if (destination == NULL && source == NULL)
		return (NULL);
	if (destination < source)
	{
		i = 0;
		while (i < size)
		{
			((char *)destination)[i] = ((char *)source)[i];
			i++;
		}
	}
	else
	{
		i = size;
		while (i > 0)
		{
			((char *)destination)[i - 1] = ((char *)source)[i - 1];
			i--;
		}
	}
	return (destination);
}
