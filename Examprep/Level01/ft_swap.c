/* Assignment name  : ft_swap
Expected files   : ft_swap.c
Allowed functions: 
--------------------------------------------------------------------------------

Write a function that swaps the contents of two integers the adresses of which
are passed as parameters.

Your function must be declared as follows:

void	ft_swap(int *a, int *b); */

#include <stdio.h>

void    ft_swap(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}

int     main(void)
{
    int first;
    int second;

    first = 1000;
    second = 0;
    ft_swap(&first, &second);
    printf("First is %d\n Second is %d\n",first, second);
    return(0);
}