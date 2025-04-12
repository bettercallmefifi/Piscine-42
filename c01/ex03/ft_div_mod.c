#include <stdio.h>

void	ft_div_mod(int a,int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int main()
{
	int h = 89;
	int j = 4;
	int div;
	int mod;

	ft_div_mod(h,j,&div,&mod);
	printf("%d %d",div,mod);
	return(0);
}
