/*
Assignment name  : only_a
Expected files   : only_a.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that displays a 'a' character on the standard output.
*/

#include <unistd.h>

int     main(void)
{
    char i;

    i = 'a';
    write(1, &i, 1);
    return (0);
}