#include <unistd.h>

void	ft_putchar(char c)
{
	write(1,&c,1);
}

void 	ft_putnbr(int nb)
{
	if(nb > 9)
	{
		ft_putchar(nb / 10 + '0');
		ft_putchar(nb % 10 + '0');
	}
	else
	{
		ft_putchar('0');
		ft_putchar(nb + '0');
	}
}

void	ft_print_comb2()
{
	int a ;
	int b ;

	a = 0 ;
	while(a <= 99)
	{
		b = a + 1 ;
		while (b <= 99)
		{
			ft_putnbr(a);
			ft_putchar(' ');
			ft_putnbr(b);
			if(a < 98 || b < 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			b++;
		}
		a++;
	}	
}
int main()
{
	ft_print_comb2();
	return(0);
}
