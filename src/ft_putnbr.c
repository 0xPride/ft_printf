#include <unistd.h>
#include "ft_printf.h"

void ft_putnbr(int num)
{
	unsigned int    u_num;
	char			number;

	u_num = num;
	if (num < 0)
	{
		u_num = -u_num;
		write(1, "-", 1);
	}
	if (u_num > 9)
		ft_putnbr(u_num / 10);
	number = u_num % 10 + '0';
	write(1, &number, 1);
}