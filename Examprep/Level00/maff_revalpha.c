/*
Assignment name  : maff_revalpha
Expected files   : maff_revalpha.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that displays the alphabet in reverse, with even letters in
uppercase, and odd letters in lowercase, followed by a newline.

Example:

$> ./maff_revalpha | cat -e
zYxWvUtSrQpOnMlKjIhGfEdCbA$
*/

#include <unistd.h>

int     main(void)
{
    char i;
    char j;

    i = 'Z';
    while (i >= 'A')
    {
        if (i%2 == 1)
        {
            write(1, &i, 1);
        }
        else
        {
            j = i + 32;
            write(1, &j, 1);
        }
        i--;
    }
    write(1, "\n", 1);
    return (0);
}