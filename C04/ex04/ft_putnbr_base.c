/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdeville <fdeville@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 12:47:53 by fdeville          #+#    #+#             */
/*   Updated: 2025/08/25 21:56:36 by fdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base);

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

int	has_duplicates(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = 1;
		while (str[i + j])
		{
			if (str[i + j] == str[i])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	valid_base(char *base)
{
	int	i;

	if (ft_strlen(base) < 2)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	if (has_duplicates(base))
		return (0);
	return (1);
}

void	ft_spec_case(int nbr, char *base, int base_l)
{
	write(1, "-", 1);
	ft_putnbr_base(-(nbr / base_l), base);
	write(1, &base[-(nbr % base_l)], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_l;

	if (!valid_base(base))
		return ;
	base_l = ft_strlen(base);
	if (base_l > 0)
	{
		if (nbr == -2147483648)
		{
			ft_spec_case(nbr, base, base_l);
			return ;
		}
		if (nbr < 0)
		{
			write(1, "-", 1);
			nbr *= -1;
		}
		if (nbr > base_l - 1)
		{
			ft_putnbr_base(nbr / base_l, base);
		}
		write(1, &base[nbr % base_l], 1);
	}
}
/*#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char *argv[])
{
	if (argc < 2)
		return (1);
	ft_putnbr_base(atoi(argv[1]), argv[2]);
	return (0);
}*/
