#include "ft_printf.h"
#include <unistd.h>

int ft_printf(const char *str, ...)
{
	va_list ap;
	char		char_val;
	char		*string_val;
	int			int_val;
	double	double_val;
	size_t	i;
	
	va_start(ap, str);
	i = 0;
	while(str[i])
	{
		if (str[i] != '%')
		{
			ft_putchar(str[i]);
			i++;
			continue ;
		}
		if (str[i + 1] == 'c')
		{
			char_val = va_arg(ap, int);
			ft_putchar(char_val);
			i += 2;
			continue ;
		} else if (str[i + 1] == 'd' || str[i + 1] == 'i')
		{
			int_val = va_arg(ap, int);
			ft_putnbr(int_val);
			i += 2;
			continue ;
		}
		else if (str[i + 1] == 'f')
		{
			double_val = va_arg(ap, double);
			ft_putnbr(double_val);
			i += 2;
			continue ;
		}
		else if (str[i + 1] == 's')
		{
			string_val = va_arg(ap, char *);
			ft_putstr(string_val);
			i += 2;
			continue;
		}
		else
		{
			ft_putchar(str[i]);
			i++;
			continue ;
		}
	}
	return (0);
}
