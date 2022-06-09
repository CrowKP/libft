/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aigarcia <aigarcia@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 12:24:55 by aigarcia          #+#    #+#             */
/*   Updated: 2022/06/09 12:53:51 by aigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	*ft_memchr(const void *str, int c, unsigned int n)
{
	const unsigned char	*src;

	src = str;
	while (n > 0)
	{
		if (*src == c)
			return ((void *)src);
		src++;
		n--;
	}
	return (0);
}
