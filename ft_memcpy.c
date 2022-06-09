/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aigarcia <aigarcia@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 08:51:02 by aigarcia          #+#    #+#             */
/*   Updated: 2022/06/09 12:32:07 by aigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	*ft_memcpy(void *dest, const void *src, unsigned int n)
{
	char		*d;
	const char	*s;

	d = dest;
	s = src;
	while (n > 0)
	{
		*d++ = *s++;
		n--;
	}
	return (dest);
}
