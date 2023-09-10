/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguerra- <lylian.gr@protonmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 22:36:50 by lguerra-          #+#    #+#             */
/*   Updated: 2023/09/09 23:44:39 by lguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h> // write
# include <stdlib.h> // malloc, free

typedef unsigned long long	t_size_t;

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		ft_strlen(char *str);
int		ft_atoi(char *str);

void	*ft_memset( void *pointer, int value, t_size_t count );
void	ft_bzero( void *pointer, t_size_t count );
void	*ft_memcpy( void *destination, const void *source, t_size_t size );
void	*ft_memccpy( void *destination, const void *source,
			int ch, t_size_t maxSize);

// MY FUNCTIONS
int		ft_min(int a, int b, int c);
int		ft_levenshtein_distance(char *s1, char *s2);

#endif
