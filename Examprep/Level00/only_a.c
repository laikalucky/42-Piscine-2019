#include <unistd.h>

int     main(void)
{
    char i;

    i = 'a';
    write(1, &i, 1);
    return (0);
}