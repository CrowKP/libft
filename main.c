/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aigarcia <aigarcia@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 12:12:20 by aigarcia          #+#    #+#             */

/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strnstr(const char *hay, const char *nee, size_t n)
{
	char	*stack;
	char	*dle;
	char	*temp;

	stack = (char *)hay;
	dle = (char *)nee;
	if (*nee == '\0')
		return (stack);
	if (n == 0 || *stack == '\0')
		return (0);
	while (*stack != *dle && n > 0)
	{
		stack++;
		n--;
	}
	temp = stack;
	while (*stack == *dle && n > 0)
	{
		stack++;
		dle++;
		n--;
	}
	if (*dle == '\0' && n > 0)
		return (temp);
	else
		return (0);
}


int	main()
{
	printf("%s", ft_strnstr("aaabcabcd", "aabc", -1));
	printf("%s", strnstr("aaabcabcd", "aabc", -1));
}
