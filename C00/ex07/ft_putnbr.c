/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdeville <fdeville@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 10:45:26 by fdeville          #+#    #+#             */
/*   Updated: 2025/08/05 16:31:03 by fdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

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
//int	main(void)
//{
//	ft_putnbr(4219);
//	return (0);
//}
