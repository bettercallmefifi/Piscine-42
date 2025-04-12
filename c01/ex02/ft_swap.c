#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

int main()
{

	int a = 42;
	int b = 45;
	int *p;
	int *p1;
	
	p = &a;
	p1 = &b;
	ft_swap(p,p1);
	printf("a : %d\n b : %d\n",a,b);
	return (0);
}
