/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aigarcia <aigarcia@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 13:37:28 by aigarcia          #+#    #+#             */
/*   Updated: 2022/01/13 14:11:13 by aigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	*ft_memset(void *str, int c, unsigned int n)
{
	unsigned char *ptr;

	ptr = str;
	while(n > 0)
	{
		*ptr++ = c;
		n--;
	}
	return (str);
}
