/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdeville <fdeville@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 05:21:29 by fdeville          #+#    #+#             */
/*   Updated: 2025/08/07 06:03:52 by fdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_switch_asc(int *tab, int i)
{
	int	temp;

	if (tab[i] > tab[i + 1])
	{
		temp = tab[i];
		tab[i] = tab[i + 1];
		tab[i + 1] = temp;
		return (1);
	}
	return (0);
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	is_ok;
	int	row_ok;

	i = 0;
	is_ok = 0;
	row_ok = 1;
	while (!is_ok)
	{
		if (ft_switch_asc(tab, i))
		{
			row_ok = 0;
		}
		i++;
		if (i == size - 1)
		{
			if (row_ok)
			{
				is_ok = 1;
			}
			i = 0;
			row_ok = 1;
		}
	}
}
/*#include <stdio.h>
int	main(void)
{
	int	size = 16;
	int	sample[16] = {10, 5, 28, 3, 14, 15, 9, 8, 9, 7, 9, 2,  8, 3, -23, 0};
	int	arr[size];
	int	i = 0;
	while (i < size)
	{
		arr[i] = sample[i];
		printf("%d, ", arr[i]);
		i++;
	}
	printf("\n\n");
	ft_sort_int_tab(arr, size);
	i = 0;
	while (i < size)
	{
		printf("%d, ", arr[i]);
		i++;
	}
	return (0);
}*/
