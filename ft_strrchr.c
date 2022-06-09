/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aigarcia <aigarcia@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 12:47:42 by aigarcia          #+#    #+#             */
/*   Updated: 2022/06/09 12:48:20 by aigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strrchr(const char *str, int c)
{
	char	*temp;

	temp = 0;
	while (*str)
	{
		if (*str == c)
			temp = (char *)str;
		str++;
	}
	return (temp);
}
