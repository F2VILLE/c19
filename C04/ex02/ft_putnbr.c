/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdeville <fdeville@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 17:02:41 by fdeville          #+#    #+#             */
/*   Updated: 2025/08/11 20:44:00 by fdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_abs(int nb)
{
	if (nb < 0)
		return (-nb);
	return (nb);
}

int	ft_special_cases(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (1);
	}
	if (nb == 2147483647)
	{
		write(1, "2147483647", 10);
		return (1);
	}
	if (nb == -2147483647)
	{
		write(1, "-2147483647", 10);
		return (1);
	}
	if (nb == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	if (nb != (int)nb)
		return (1);
	return (0);
}

void	ft_putnbr(int nb)
{
	char	buffer[11];
	int		mult;
	int		idx;

	idx = 0;
	mult = 1;
	if (ft_special_cases(nb))
		return ;
	while (mult < ft_abs(nb))
	{
		buffer[idx] = '0' + ((ft_abs(nb) / mult) % 10);
		mult *= 10;
		idx++;
	}
	if (nb < 0)
		buffer[idx++] = '-';
	idx--;
	while (idx >= 0)
	{
		write(1, &buffer[idx], 1);
		idx--;
	}
}
/*#include <stdio.h>
int	main(void)
{
	ft_putnbr(1234);
	write(1, "\n", 1);
	ft_putnbr(42);
	write(1, "\n", 1);
	ft_putnbr(-19);
	write(1, "\n", 1);
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
	ft_putnbr(0);
	write(1, "\n", 1);
	ft_putnbr(2147483647);
	write(1, "\n", 1);
	return (0);
}*/
