#include <unistd.h>

int     main(void)
{
    char j;
    char i = 'a';
    while (i <= 'z')
    {
        if (i%2 == 1)
        {
            write(1, &i, 1);
        }
        else
        {
            j = i - 32;
            write(1, &j, 1);
        }
        i++;
    }
    write(1, "\n", 1);
}