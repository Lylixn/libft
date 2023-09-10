/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lg_levenshtein_distance.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguerra- <lylian.gr@protonmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 23:26:14 by lguerra-          #+#    #+#             */
/*   Updated: 2023/09/09 23:50:13 by lguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_levenshtein_distance(char *s1, char *s2)
{
	int	**matrix;
	int	i;
	int	j;
	int	len1;
	int	len2;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	matrix = (int **)malloc(sizeof(int *) * (len1 + 1));
	i = -1;
	while (++i <= len1)
		matrix[i] = (int *)malloc(sizeof(int) * (len2 + 1));
	i = -1;
	while (++i <= len1)
		matrix[i][0] = i;
	j = -1;
	while (++j <= len2)
		matrix[0][j] = j;
	i = 0;
	while (++i <= len1)
	{
		j = 0;
		while (++j <= len2)
			matrix[i][j] = ft_min(matrix[i - 1][j] + 1, matrix[i][j - 1] + 1,
					matrix[i - 1][j - 1] + (s1[i - 1] != s2[j - 1]));
	}
	return (matrix[len1][len2]);
}
