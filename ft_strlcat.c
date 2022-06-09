/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aigarcia <aigarcia@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 12:39:08 by aigarcia          #+#    #+#             */
/*   Updated: 2022/06/09 12:46:16 by aigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlcat(char *dst, const char *src, unsigned int maxlen)
{
	unsigned int	srclen;
	unsigned int	dstlen;
	unsigned int	dit;
	unsigned int	sit;
	unsigned int	size;

	dstlen = 0;
	srclen = 0;
	size = maxlen;
	while (dst[dstlen] != '\0' && size > 0)
	{
		dstlen++;
		size--;
	}
	while (src[srclen])
		srclen++;
	if (dstlen == maxlen)
		return (maxlen + srclen);
	sit = 0;
	dit = dstlen;
	if (srclen < maxlen - dstlen)
	{
		while ((srclen + 1) > 0)
		{
			dst[dit] = src[sit];
			dit++;
			sit++;
			srclen--;
		}
	}
	else
	{
		while ((maxlen - 1) > 0)
		{
			dst[dit] = src[sit];
			dit++;
			sit++;
			maxlen--;
		}
		dst[dit] = '\0';
	}
	return (dstlen + srclen - 1);
}
