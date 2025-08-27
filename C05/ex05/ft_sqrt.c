/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdeville <fdeville@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 04:22:34 by fdeville          #+#    #+#             */
/*   Updated: 2025/08/27 01:01:24 by fdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_sqrt(int nb)
{
	long	i;

	i = 1;
	while (i < (nb / i))
		i++;
	if (i * i == nb)
		return ((int)i);
	return (0);
}
/* #include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_sqrt(36));
	printf("%d\n", ft_sqrt(0));
	printf("%d\n", ft_sqrt(1));
	printf("%d\n", ft_sqrt(81));
	return (0);
} */
