char	*ft_strnstr(const char *hay, const char *nee, unsigned int n)
{
	char	*stack;
	char	*dle;
	char	*temp;

	stack = (char *)hay;
	dle = (char *)nee;
	if (*nee == '\0')
		return (stack);
	if (n <= 0 || *stack == '\0')
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
