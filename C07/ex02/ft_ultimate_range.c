/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdeville <fdeville@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 13:53:11 by fdeville          #+#    #+#             */
/*   Updated: 2025/08/27 22:41:51 by fdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	delta(int a, int b)
{
	int	d;

	d = a - b;
	if (d < 0)
		return (-d);
	return (d);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	d;
	int	i;

	if (max <= min)
	{
		*range = NULL;
		return (0);
	}
	d = delta(min, max);
	*range = (int *)malloc(d * sizeof(int));
	if (!(*range))
		return (-1);
	i = 0;
	while (i < d)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (d);
}
/*
int	main(void)
{
	int	*range;
	int	min;
	int	max;
	int	len;
	int	i;

	min = -4;
	max = 4;
	len = ft_ultimate_range(&range, min, max);
	printf("\nlen %d\n", len);
	if (len < 0)
		return (1);
	i = 0;
	while (i < len)
	{
		printf("%d, ", range[i]);
		i++;
	}
	free(range);
	return (0);
}*/
