/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdeville <fdeville@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 04:40:50 by fdeville          #+#    #+#             */
/*   Updated: 2025/08/26 01:46:14 by fdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	i = 2;
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = nb;
	while (!ft_is_prime(i++))
		;
	return (--i);
}
/* #include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_find_next_prime(6));
	printf("%d\n", ft_find_next_prime(0));
	printf("%d\n", ft_find_next_prime(11));
	printf("%d\n", ft_find_next_prime(12));
	return (0);
} */
