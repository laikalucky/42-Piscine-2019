/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rushes.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haskonat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/27 19:25:55 by haskonat          #+#    #+#             */
/*   Updated: 2019/01/27 21:36:24 by haskonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include.h"

char	*ft_rush00(int x, int y)
{
	char	*res;
	char	*patterns[3];

	patterns[0] = "o-o";
	patterns[1] = "| |";
	patterns[2] = "o-o";
	res = ft_rush(x, y, patterns);
	return (res);
}

char	*ft_rush01(int x, int y)
{
	char *res;
	char *patterns[3];

	patterns[0] = "/*\\";
	patterns[1] = "* *";
	patterns[2] = "\\*/";
	res = ft_rush(x, y, patterns);
	return (res);
}

char	*ft_rush02(int x, int y)
{
	char *res;
	char *patterns[3];

	patterns[0] = "ABA";
	patterns[1] = "B B";
	patterns[2] = "CBC";
	res = ft_rush(x, y, patterns);
	return (res);
}

char	*ft_rush03(int x, int y)
{
	char *res;
	char *patterns[3];

	patterns[0] = "ABC";
	patterns[1] = "B B";
	patterns[2] = "ABC";
	res = ft_rush(x, y, patterns);
	return (res);
}

char	*ft_rush04(int x, int y)
{
	char *res;
	char *patterns[3];

	patterns[0] = "ABC";
	patterns[1] = "B B";
	patterns[2] = "CBA";
	res = ft_rush(x, y, patterns);
	return (res);
}
