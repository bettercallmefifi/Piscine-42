#include <unistd.h>

void	ft_putchar(char c)
{
	write(1,&c,1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putnbr(-2147483648);
	}
	else if(nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else if(nb >= 0 && nb <= 9)
	{
		ft_putchar(nb + '0');
	}
}

int main()
{
	ft_putnbr(100000);
	return (0);
}