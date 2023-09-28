/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguerra- <lylian.gr@protonmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 22:36:50 by lguerra-          #+#    #+#             */
/*   Updated: 2023/09/28 22:51:06 by lguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h> // write
# include <stdlib.h> // malloc, free
# include <stdarg.h> // va_start, va_arg, va_end

typedef unsigned long long	t_size_t;

void		ft_putchar(char c);
void		ft_putstr(char *str);
void		ft_putnbr(int nb);

void		*ft_memset(void *pointer, int value, t_size_t count);
void		ft_bzero(void *pointer, t_size_t count);
void		*ft_memcpy(void *destination, const void *source, t_size_t size);
void		*ft_memccpy(void *destination, const void *source, int ch,
				t_size_t maxSize);
void		*ft_memmove(void *destination, const void *source, t_size_t size);
void		*ft_memchr(const void *memory_block, int searched_char,
				t_size_t size);
int			ft_memcmp(const void *pointer1, const void *pointer2,
				t_size_t size);
int			ft_strlen(char *str);
char		*ft_strdup(const char *s1);
char		*ft_strcpy(char *dest, char *src);
char		*ft_strncpy(char *dest, char *src, t_size_t n);
char		*ft_strcat(char *dest, char *src);
char		*ft_strncat(char *dest, char *src, t_size_t nb);
t_size_t	ft_strlcat(char *dest, char *src, t_size_t size);
char		*ft_strchr(char *str, int searched_char);
char		*ft_strrchr(char *str, int searched_char);
char		*ft_strstr(char *str, char *to_find);
char		*ft_strnstr(char *str, char *to_find, t_size_t len);
int			ft_strcmp(char *s1, char *s2);
int			ft_strncmp(char *s1, char *s2, t_size_t n);
int			ft_atoi(char *str);
int			ft_isalpha(int character);
int			ft_isdigit(int character);
int			ft_isalnum(int character);
int			ft_isascii(int character);
int			ft_isprint(int character);
int			ft_toupper(int number);
int			ft_tolower(int number);

char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strsjoin(const char *str, ...);

#endif
