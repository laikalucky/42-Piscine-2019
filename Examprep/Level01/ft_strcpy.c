/* Assignment name  : ft_strcpy
Expected files   : ft_strcpy.c
Allowed functions: 
--------------------------------------------------------------------------------

Reproduce the behavior of the function strcpy (man strcpy).

Your function must be declared as follows:

char    *ft_strcpy(char *s1, char *s2); */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char *ft_strcpy(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s2[i])
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = s2[i];
    return(s1);
}

int     main(void)
{
    char *src;
    char *dest;

    src = "Hello world!!";
    dest = (char *)malloc(sizeof(char) * strlen(src) + 1);
    printf("%s\n", ft_strcpy(dest, src));
    free(dest);
}