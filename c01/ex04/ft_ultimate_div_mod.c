#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int div;
	int mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
int main()
{
	int a = 7;
	int b = 9;
	int *p;
	int *h;

	p = &a;
	h = &b;
	ft_ultimate_div_mod(p,h);
	printf("%d %d",*p,*h);
	return(0);
}


