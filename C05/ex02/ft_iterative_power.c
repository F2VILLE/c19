/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdeville <fdeville@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 04:02:22 by fdeville          #+#    #+#             */
/*   Updated: 2025/08/14 04:09:31 by fdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_power(int nb, int power)
{
	int	output;
	int	i;

	i = 0;
	output = 1;
	if (power < 0)
	{
		return (0);
	}
	else
	{
		while (i++ < power)
			output *= nb;
	}
	return (output);
}
/* #include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_iterative_power(2, 4));
	printf("%d\n", ft_iterative_power(6, 1));
	printf("%d\n", ft_iterative_power(10, 0));
	printf("%d\n", ft_iterative_power(2, -4));
	return (1);
}*/
