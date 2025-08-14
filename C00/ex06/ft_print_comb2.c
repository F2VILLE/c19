/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdeville <fdeville@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 02:31:20 by fdeville          #+#    #+#             */
/*   Updated: 2025/08/07 06:55:08 by fdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_sep(void)
{
	char	sep[2];

	sep[0] = ',';
	sep[1] = ' ';
	write(1, &sep, 2);
}

int	ft_pow(int base, int exp)
{
	int	temp;

	if (exp == 0)
	{
		return (1);
	}
	else if (exp % 2)
	{
		return (base * ft_pow(base, exp - 1));
	}
	else
	{
		temp = ft_pow(base, exp / 2);
		return (temp * temp);
	}
}

void	ft_putnbr(int nbr)
{
	int		i;
	char	buffer[10];

	i = 0;
	while (nbr / ft_pow(10, i) >= 1)
	{
		buffer[i] = '0' + ((nbr / ft_pow(10, i)) % 10);
		i++;
	}
	while (i >= 0)
	{
		write(1, &buffer[i], 1);
		i--;
	}
}

void	ft_print_seq(int x, int y)
{
	char	buf[1];

	ft_putnbr(x);
	buf[0] = ' ';
	write(1, &buf, 1);
	ft_putnbr(y);
	if (!(x == 98 && y == 99))
	{
		ft_print_sep();
	}
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (x < 99)
	{
		y = x + 1;
		while (y < 100)
		{
			ft_print_seq(x, y);
			y++;
		}
		x++;
	}
}
/* #include <stdio.h>
int	main(void)
{
	ft_print_comb2();
	return (0);
} */
