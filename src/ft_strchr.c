/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguerra- <lylian.gr@protonmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 22:54:27 by lguerra-          #+#    #+#             */
/*   Updated: 2023/09/10 22:54:49 by lguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char *str, int searched_char)
{
	while (*str)
	{
		if (*str == searched_char)
			return (str);
		str++;
	}
	if (*str == searched_char)
		return (str);
	return (NULL);
}
