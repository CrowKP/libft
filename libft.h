/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aigarcia <aigarcia@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 11:58:31 by aigarcia          #+#    #+#             */
/*   Updated: 2022/06/09 12:50:24 by aigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>

int				ft_isalpha(int c);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
unsigned int	ft_strlen(const char *str);
void			*ft_memset(void *str, int c, unsigned int n);
void			*ft_memcpy(void *dest, const void *src, unsigned int n);
int				ft_isprint(int c);
void			*ft_memmove(void *des, const void *src, unsigned int n);
int				ft_toupper(int c);
int				ft_tolower(int c);
char			*ft_strchr(const char *str, int c);
char			*ft_strrchr(const char *str, int c);
int				ft_strncmp(const char *str1, const char *str2, unsigned int n);
void			*ft_memchr(const void *src, int c, unsigned int n);
int				ft_memcmp(const void *str1, const void *str2, unsigned int n);
int				ft_atoi(const char *str);

#endif
