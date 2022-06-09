/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aigarcia <aigarcia@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 12:32:29 by aigarcia          #+#    #+#             */
/*   Updated: 2022/06/09 12:54:14 by aigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	*ft_memmove(void *des, const void *src, unsigned int n)
{
	char		*d;
	const char	*s;
	const char	*lasts;
	char		*lastd;

	d = des;
	s = src;
	if (d < s)
		while (n--)
			*d++ = *s++;
	else
	{
		lasts = s + (n - 1);
		lastd = d + (n - 1);
		while (n--)
			*lastd-- = *lasts--;
	}
	return (des);
}
