#include <stdio.h>

int	ft_atoi(const char *str)
{
  int	result;
  unsigned int	digit;
  int	sign;

  result = 0;
  if (*str == 32)
    str++;
  if (*str == '-')
    {
      sign = 1;
      str++;
    }
  else
    {
      sign = 0;
      if (*str == '+')
	str++;
    }
  while (*str)
    {
      digit = *str - '0';
      if (digit > 9)
	{
	  break;
	}
      result = (10*result) + digit;
      str++;
    }
  if (sign)
    {
      return (-result);
    }
  return result;
}
