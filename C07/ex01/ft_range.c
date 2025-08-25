/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdeville <fdeville@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 11:44:08 by fdeville          #+#    #+#             */
/*   Updated: 2025/08/21 13:51:04 by fdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

int	ft_delta(int a, int b)
{
	return (ft_abs(a - b));
}

int	*ft_range(int min, int max)
{
	int	d;
	int	i;
	int	*arr;

	if (min >= max)
		return (NULL);
	d = ft_delta(min, max);
	i = 0;
	arr = malloc((d + 1) * sizeof(int));
	while (i < d)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}
/* #include <stdio.h>
int	main(void)
{
	int	i;
	int 	min;
	int	max;

	i = 0;
	min = -4;
	max = 8;
	int	*arr = ft_range(min, max);
	while (i < ft_delta(min, max))
	{
		printf("%d ", arr[i]);
		i++;
	}
	return (0);
}*/
