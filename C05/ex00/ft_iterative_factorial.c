/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdeville <fdeville@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 03:37:52 by fdeville          #+#    #+#             */
/*   Updated: 2025/08/14 03:51:20 by fdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_factorial(int nb)
{
	int	output;
	int	i;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	output = nb;
	i = 1;
	while (nb - i > 1)
		output *= nb - (i++);
	return (output);
}
/* #include <stdio.h>
int	main(void)
{
	int t1 = ft_iterative_factorial(5);
	int t2 = ft_iterative_factorial(-5);
	int t3 = ft_iterative_factorial(0);
	printf("%d\n", t1); 
	printf("%d\n", t2); 
	printf("%d\n", t3); 
	return (0);
}*/
