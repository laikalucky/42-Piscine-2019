#include <unistd.h>

int     main(int argc, char **argv)
{
    int i;
    int count;

    i = 0;
    count = argc - 1;

    if (argc > 1)
    {
        while (argv[count][i])
        {
            write(1, &argv[count][i], 1);
            i++;
        }
    } 
    write(1, "\n", 1);
    return (0);
}