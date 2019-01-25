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