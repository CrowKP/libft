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
  return(temp);
}
