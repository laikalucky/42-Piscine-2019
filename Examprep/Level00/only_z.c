#include <unistd.h>

int     main(void)
{
    char i;

    i = 'z';
    write(1, &i, 1);
    return (0);
}