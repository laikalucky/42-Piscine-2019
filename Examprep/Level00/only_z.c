/*
Assignment name  : only_z
Expected files   : only_z.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that displays a 'z' character on the standard output.
*/

#include <unistd.h>

int     main(void)
{
    char i;

    i = 'z';
    write(1, &i, 1);
    return (0);
}