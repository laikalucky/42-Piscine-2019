/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   include.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haskonat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/27 20:25:31 by haskonat          #+#    #+#             */
/*   Updated: 2019/01/27 22:38:29 by bmirbagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INCLUDE_H
# define INCLUDE_H

# include <unistd.h>
# include <stdlib.h>
# define BUF 4000

char	*ft_rush00(int x, int y);
char	*ft_rush01(int x, int y);
char	*ft_rush02(int x, int y);
char	*ft_rush03(int x, int y);
char	*ft_rush04(int x, int y);
int		ft_pattern(char *pattern, char *res, int i, int y);
char	*ft_rush(int x, int y, char **patterns);
int		ft_find_rows(char *str);
int		ft_find_cols(char *str);
void	ft_find_rush(char *str, int rows, int cols);
int		ft_find_matches(char *s1, char *s2);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_display_rush(char rush, int rows, int cols, int matches);

#endif
