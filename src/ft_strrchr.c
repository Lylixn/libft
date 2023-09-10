/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguerra- <lylian.gr@protonmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 22:55:26 by lguerra-          #+#    #+#             */
/*   Updated: 2023/09/10 22:55:26 by lguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *str, int searched_char)
{
	int	i;

	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == searched_char)
			return (&str[i]);
		i--;
	}
	return (NULL);
}
