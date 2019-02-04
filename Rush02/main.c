#include "include.h"

int		ft_pattern(char *pattern, char *res, int i, int y)
{
	int j;

	j = 0;
	res[i++] = pattern[0];
	while (j < (y - 2))
	{
		res[i++] = pattern[1];
		j++;
	}
	if (y > 1)
	{
		res[i++] = pattern[2];
	}
	res[i++] = '\n';
	return (i);
}

char	*ft_rush(int x, int y, char **patterns)
{
	char	*res;
	int		i;
	int		row;

	i = 0;
	row = 0;
	if ((res = (char *)malloc(sizeof(char) * (y * (x + 1)))) == NULL)
		return (NULL);
	while (row < x)
	{
		if (row == 0)
			i = ft_pattern(patterns[0], res, i, y);
		else if (row == (x - 1))
			i = ft_pattern(patterns[2], res, i, y);
		else
			i = ft_pattern(patterns[1], res, i, y);
		row++;
	}
	res[i - 1] = '\0';
	return (res);
}

void	ft_find_rush(char *str, int rows, int cols)
{
	int matches;

	matches = 0;
	if (ft_find_matches(str, ft_rush00(rows, cols)))
		ft_display_rush('0', rows, cols, matches++);
	if (ft_find_matches(str, ft_rush01(rows, cols)))
		ft_display_rush('1', rows, cols, matches++);
	if (ft_find_matches(str, ft_rush02(rows, cols)))
		ft_display_rush('2', rows, cols, matches++);
	if (ft_find_matches(str, ft_rush03(rows, cols)))
		ft_display_rush('3', rows, cols, matches++);
	if (ft_find_matches(str, ft_rush04(rows, cols)))
		ft_display_rush('4', rows, cols, matches++);
	if (matches == 0)
	{
		write(1, "aucune\n", 7);
	}
	else
	{
		write(1, "\n", 1);
	}
}

int		main(void)
{
	char	input[BUF + 1];
	int		bytes;
	int		rows;
	int		cols;

	bytes = read(0, input, BUF);
	if (bytes == 0)
	{
		write(1, "aucune\n", 7);
	}
	input[bytes] = '\0';
	rows = ft_find_rows(input);
	cols = ft_find_cols(input);
	ft_find_rush(input, rows, cols);
	return (0);
}