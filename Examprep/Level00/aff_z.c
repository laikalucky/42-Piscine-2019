/*
Assignment name  : aff_z
Expected files   : aff_z.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string, and displays the first 'z'
character it encounters in it, followed by a newline. If there are no
'z' characters in the string, the program writes 'z' followed
by a newline. If the number of parameters is not 1, the program displays
'z' followed by a newline.

Example:

$> ./aff_z "abc" | cat -e
z$
$> ./aff_z "dubO a POIL" | cat -e
z$
$> ./aff_z "zaz sent le poney" | cat -e
z$
$> ./aff_z | cat -e
z$
*/

/*#include <unistd.h>

int     main(int argc, char **argv)
{
    int j;

    j = 0;
    if (argc > 1)
    {
        while (argv[1][j])
        {
            if (argv[1][j] == 'z')
            {
                write(1, &argv[1][j], 1);
                write(1, "\n", 1);
                return (0);
            }
            j++;
        }
    }
    else
    {
        write(1, "z", 1);
    }
    write(1, "\n", 1);
    
}*/

#include <unistd.h>

int     main(void)
{
    write(1, "z\n", 2);
    return (0);
}