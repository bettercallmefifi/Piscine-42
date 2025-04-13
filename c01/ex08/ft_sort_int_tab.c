#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int count = 0;
	size--;
	int tmp;

	while(count < size)
	{
		if(tab[count] > tab[count + 1])
		{
			tmp = tab[count];
			tab[count] = tab[count + 1];
			tab[count + 1] = tmp;
		}
		else
			count++;
	}
}
int main()
{
	int str[]= {1,7,4,9,3,2};
	ft_sort_int_tab(str,6);
	for(int i = 0; i < 6;i++)
	{
		printf("%d",str[i]);
	}
	return(0);
}

