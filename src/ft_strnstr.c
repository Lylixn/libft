/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguerra- <lylian.gr@protonmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 22:57:43 by lguerra-          #+#    #+#             */
/*   Updated: 2023/09/10 22:57:43 by lguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *str, char *to_find, t_size_t len)
{
	t_size_t	i;
	t_size_t	j;

	i = 0;
	j = 0;
	if (!to_find[0])
		return (str);
	while (str[i] && i < len)
	{
		while (str[i + j] == to_find[j] && i + j < len)
		{
			if (!to_find[j + 1])
				return (str + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}
