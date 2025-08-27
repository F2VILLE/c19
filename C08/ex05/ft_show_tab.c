/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdeville <fdeville@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 18:46:08 by fdeville          #+#    #+#             */
/*   Updated: 2025/08/27 20:41:35 by fdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

int	ft_strlen(char *s)
{
	int	l;

	l = 0;
	while (s[l])
		l++;
	return (l);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *s)
{
	int	l;

	l = ft_strlen(s);
	write(1, s, l);
}

void	ft_putnbr(int n)
{
	int	div;
	int	i;
	int	neg;

	div = 1;
	neg = 0;
	if (n < 0)
	{
		neg = 1;
		n = -n;
	}
	while (n / div > 0)
		div *= 10;
	div /= 10;
	if (neg)
		ft_putchar('-');
	i = 0;
	while (div > 0)
	{
		ft_putchar('0' + ((n / div) % 10));
		div /= 10;
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].str);
		ft_putstr("\n");
		ft_putnbr(par[i].size);
		ft_putstr("\n");
		ft_putstr(par[i].copy);
		ft_putstr("\n");
		i++;
	}
}

/* DEBUG
#include <stdlib.h>
char	*ft_strncpy(char *dest, char *src, int size)
{
	int	i;

	i = 0;
	while (i < size && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < size)
		dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*arr;
	int					i;
	int					len;

	arr = (struct s_stock_str *)malloc((ac + 1) * sizeof(struct s_stock_str));
	if (!arr)
		return (NULL);
	i = 0;
	len = 0;
	while (i < ac)
	{
		len = ft_strlen(av[i]);
		arr[i].size = len;
		arr[i].str = av[i];
		arr[i].copy = malloc((len + 1) * sizeof(char));
		if (!arr[i].copy)
			return (NULL);
		ft_strncpy(arr[i].copy, av[i], len);
		i++;
	}
	return (arr);
}

int	main(int ac, char *av[])
{
	struct s_stock_str	*arr;

	arr = ft_strs_to_tab(ac, av);
	ft_show_tab(arr);	
	return (0);
}*/
