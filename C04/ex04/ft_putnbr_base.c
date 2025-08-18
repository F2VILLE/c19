/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdeville <fdeville@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 12:47:53 by fdeville          #+#    #+#             */
/*   Updated: 2025/08/18 17:06:24 by fdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_l;

	base_l = ft_strlen(base);
	printf("Converting %d in base %d\n\n", nbr, base_l);
	if (base_l > 0)
	{
		if (nbr < 0)
		{
			write(1, "-", 1);
			nbr *= -1;
		}
		else if (nbr > base_l - 1)
		{
			ft_putnbr_base(nbr / base_l, base);
		}
		write(1, &base[nbr % base_l], 1);
	}
}
/* #include <stdio.h>
#include <stdlib.h>
int	main(int argc, char *argv[])
{
	if (argc < 2)
		return (1);
	ft_putnbr_base(atoi(argv[1]), argv[2]);
	return (0);
}*/
