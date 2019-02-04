#include "include.h"

int		ft_find_rows(char *str)
{
	int rows;

	rows = 0;
	while (*str)
	{
		if (*str == '\n')
		{
			rows++;
		}
		str++;
	}
	return (rows + 1);
}

int		ft_find_cols(char *str)
{
	int cols;

	cols = 0;
	while (*str != '\n' && *str)
	{
		str++;
		cols++;
	}
	return (cols);
}

int		ft_find_matches(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
		{
			return (0);
		}
		s1++;
		s2++;
	}
	if (*s1 || *s2)
		return (0);
	return (1);
}