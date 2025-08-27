/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdeville <fdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 16:26:00 by fdeville          #+#    #+#             */
/*   Updated: 2025/08/25 22:02:32 by fdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_spec_case(int *n)
{
	if (*n == INT_MAX)
	{
		write(1, "2147483647", 10);
		return (1);
	}
	if (*n == INT_MIN)
	{
		write(1, "-2147483648", 11);
		return (1);
	}
	if (*n == 0)
	{
		ft_putchar('0');
		return (1);
	}
	if (*n < 0)
	{
		ft_putchar('-');
		*n = -(*n);
	}
	return (0);
}

void	ft_putnbr(int nb)
{
	char	res[12];
	char	rev[12];
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (ft_spec_case(&nb))
		return ;
	while (nb > 0)
	{
		rev[j] = ((int)(nb % 10)) + '0';
		nb = nb / 10;
		j++;
	}
	j--;
	while (j >= 0)
	{
		res[i] = rev[j];
		j--;
		i++;
	}
	write(1, res, i);
}
/*
int    main(void)
{
	ft_putnbr(42);
	ft_putchar('\n');
	ft_putnbr(INT_MAX);
	ft_putchar('\n');
	ft_putnbr(INT_MIN);
	return (0);
}*/
