/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguerra- <lylian.gr@protonmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 22:22:40 by lguerra-          #+#    #+#             */
/*   Updated: 2023/09/10 22:22:40 by lguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *memory_block, int searched_char, t_size_t size)
{
	t_size_t			i;
	unsigned char		*memory_block_casted;
	unsigned char		searched_char_casted;

	i = 0;
	memory_block_casted = (unsigned char *)memory_block;
	searched_char_casted = (unsigned char)searched_char;
	while (i < size)
	{
		if (memory_block_casted[i] == searched_char_casted)
			return (memory_block_casted + i);
		i++;
	}
	return (NULL);
}
