/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjankows <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/19 20:52:11 by fjankows          #+#    #+#             */
/*   Updated: 2019/01/20 13:13:14 by fjankows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include "validate_input.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	chk_collissions(unsigned char grid[9][9], int row, int col, int num)
{
	int x;
	int y;

	x = 0;
	while (x < 3)
	{
		y = 0;
		while (y < 3)
		{
			if (grid[x + (row - row % 3)][y + (col - col % 3)] == num)
				return (0);
			++y;
		}
		++x;
	}
	x = 0;
	while (x < 9)
	{
		if ((grid[x][col] == num) || (grid[row][x] == num))
			return (0);
		++x;
	}
	return (grid[row][col] == 0);
}

char	recursive_next(unsigned char grid[9][9])
{
	int i;
	int	row;
	int	col;

	row = 0;
	col = 0;
	while (grid[row][col] != 0)
		if ((col = ((col + 1) % 9)) == 0)
			if (++row == 9)
				return (-2);
	i = 1;
	while (i <= 9)
	{
		if (chk_collissions(grid, row, col, i))
		{
			grid[row][col] = i;
			if (recursive_next(grid))
				return (1);
			grid[row][col] = 0;
		}
		++i;
	}
	return (0);
}

void	output_puzzle(unsigned char grid[9][9])
{
	int row;
	int col;

	row = 0;
	while (row < 9)
	{
		col = 0;
		while (col < 9)
		{
			ft_putchar(grid[row][col] + '0');
			if (col != 9 - 1)
				ft_putchar(' ');
			++col;
		}
		ft_putchar('\n');
		++row;
	}
}

int		main(int argc, char **argv)
{
	int				i;
	int				j;
	unsigned char	grid[9][9];

	if (!(validate_input(argc, argv)))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	i = 1;
	while (i <= 9)
	{
		j = 0;
		while (j < 9)
		{
			grid[i - 1][j] = (argv[i][j] == '.' ? 0 : argv[i][j] - '0');
			++j;
		}
		i++;
	}
	if (recursive_next(grid) == 1)
		output_puzzle(grid);
	else
		write(1, "Error\n", 6);
}
