/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdeville <fdeville@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 04:10:04 by fdeville          #+#    #+#             */
/*   Updated: 2025/08/14 04:13:26 by fdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
/* #include <stdio.h>
int     main(void)
{
        printf("%d\n", ft_recursive_power(2, 4));
        printf("%d\n", ft_recursive_power(6, 1));
        printf("%d\n", ft_recursive_power(10, 0));
        printf("%d\n", ft_recursive_power(2, -4));
        return (1);
} */
