#include <unistd.h>

int ft_check_collisions(int, int, char);
int ft_row_check(int, int, char);
int ft_column_check(int, int, char);
int ft_square_check(int, int, char);

char g_sudoku[9][9] = {0};

/* 1 - True - Number already present
   0 - False - Number not present*/

int ft_check_collisions(int x, int y, char num)
{
    if ((ft_row_check(x, y, num) || ft_column_check(x, y, num) || ft_square_check(x, y, num)) == 1)
    {
        //write(1, "Collisions - True\n", 18);
        return (1);
    }
    else
    {
        //write(1, "Collisions - False\n", 19);
        return (0);
    }
}

int ft_row_check(int x, int y, char num)
{
    int row = 0;
    while (row < 9)
    {
        if (g_sudoku[row][y] == num)
        {
            //write(1, "Row - True\n", 11);
            return (1);
        }
        row++;
    }
    //write(1, "Row - False\n", 12);
    return (0);
}

int ft_column_check(int x, int y, char num)
{
    int col = 0;
    while (col < 9)
    {
        if (g_sudoku[x][col] == num)
        {
            //write(1, "Column - True\n", 14);
            return (1);
        }
        col++;
    }
    //write(1, "Column - False\n", 15);
    return (0);
}

int ft_square_check(int x, int y, char num)
{
    int i;
    int j;
    if (x < 3)
    {
        x = 0;
    }
    else if (x < 6)
    {
        x = 3;
    }
    else
    {
        x = 6;
    }

    if (y < 3)
    {
        y = 0;
    }
    else if (y < 6)
    {
        y = 3;
    }
    else
    {
        y = 6;
    }

    i = x;
    j = y;
    while (i < (x + 3))
    {
        while (j < (y + 3))
        {
            if (g_sudoku[i][j] == num)
            {
                //write(1, "Square - True\n", 14);
                return (1);
            }
            j++;
        }
        j = y;
        i++;
    }
    //write(1, "Square - False\n", 15);
    return (0);
}

int solve_sudoku(int x, int y)
{
    char num;
    int tx;
    int ty;

    tx = 0;
    ty = 0;

    num = '1';
    if (g_sudoku[x][y] != '.')
    {
        if (x == 8 && y == 8)
        {
            //True condition, exit the function
            return 1;
        }
        if (x < 8)
        {
            x++;
        }
        else if (y < 8)
        {
            x = 0;
            y++;
        }

        if (solve_sudoku(x, y))
        {
            //True condition, exit the function
            return 1;
        }
        else
        {
            return 0;
        }
    }

    if (g_sudoku[x][y] == '.')
    {
        while (num <= '9')
        {
            if (ft_check_collisions(x, y, num) != 1)
            {
                g_sudoku[x][y] = num;

                if (x == 8 && y == 8)
                {
                    return 1;
                }
                if (x < 8)
                {
                    tx = x + 1;
                }
                else if (y < 8)
                {
                    tx = 0;
                    ty = y + 1;
                }

                if (solve_sudoku(tx, ty))
                {
                    //True condition, exit the function
                    return 1;
                }
            }

            num++;
        }
        g_sudoku[x][y] = '.';
        return 0;
    }
}

void print_sudoku()
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (i < 9)
    {
        while (j < 9)
        {
            write(1, &g_sudoku[i][j], 1);
            if (j != 8)
            {
                write(1, " ", 1);
            }
            j++;
        }
        write(1, "\n", 1);
        j = 0;
        i++;
    }
}

int main(int argc, char **argv)
{
    int i = 1;
    int j = 0;
    if (argc == 10)
    {
        while (i < argc)
        {
            while (argv[i][j])
            {
                g_sudoku[i - 1][j] = argv[i][j];
                j++;
            }
            j = 0;
            i++;
        }
    }
    else
    {
        write(1, "Error\n", 6);
    }
    solve_sudoku(0, 0);
    print_sudoku();
    return (0);
}