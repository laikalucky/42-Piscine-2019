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