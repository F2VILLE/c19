/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdeville <fdeville@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 05:06:26 by fdeville          #+#    #+#             */
/*   Updated: 2025/08/07 05:20:57 by fdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temp;
		i++;
	}
}
/*#include <stdio.h>
int	main(void)
{
	int	size;

	size = 11;
	int	arr[size];
	int	i;

	i = 0;
	while (i < size)
	{
		arr[i] = i*i;
		printf("%d, ", arr[i]);
		i++;
	}

	ft_rev_int_tab(arr, size);
	printf("\n\n");
	i = 0;
	while (i < size)
	{
		printf("%d, ", arr[i]);
		i++;
	}
	return (0);
}*/
