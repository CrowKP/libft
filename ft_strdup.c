#include "libft.h"

char	*ft_strdup(const char *str)
{
	char			*dest;
	unsigned int	len;
	unsigned int	it;

	it = 0;
	len = ft_strlen(str);
	dest = malloc(sizeof(*str) * (len + 1));
	if (!(dest = malloc(sizeof(*str) * (len + 1))))
		return (0);
	while (str[it])
	{
		dest[it] = str[it];
		it++;
	}
	dest[it] = '\0';
	return (dest);
}