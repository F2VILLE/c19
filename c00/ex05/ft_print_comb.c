/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdeville <fdeville@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 01:45:07 by fdeville          #+#    #+#             */
/*   Updated: 2025/08/05 17:53:33 by fdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_seq(int a, int b, int c, int separator)
{
	char	out[3];
	char	sep[2];

	out[0] = '0' + a;
	out[1] = '0' + b;
	out[2] = '0' + c;
	write(1, out, 3);
	if (separator)
	{
		sep[0] = ',';
		sep[1] = ' ';
		write(1, &sep, 2);
	}
}

void	ft_print_comb(void)
{
	int	x;
	int	y;
	int	z;

	x = 0;
	y = 1;
	z = 2;
	while (x < 10 - 2)
	{
		y = x + 1;
		while (y < 10 - 1)
		{
			z = y + 1;
			while (z < 10)
			{
				ft_print_seq(x, y, z, !(x == 9 - 2 && y == 9 - 1 && z == 9));
				z++;
			}
			y++;
		}
		x++;
	}
}
/*
int	main(void)
{
	ft_print_comb();
	return (0);
} */
