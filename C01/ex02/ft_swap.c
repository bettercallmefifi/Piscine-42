#include <stdio.h>

void    ft_swap(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}

int main()
{
    int a;
    int b;
    int *p;
    int *p1;

    p = &a;
    p1 = &b;

    ft_swap(p,p1);
    printf("a : %d\n b : %d\n",a,b);
    return (0);
}