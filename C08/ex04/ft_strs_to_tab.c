/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdeville <fdeville@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 21:37:40 by fdeville          #+#    #+#             */
/*   Updated: 2025/08/18 22:13:09 by fdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	l;

	l = 0;
	while (str[l] != '\0')
		l++;
	return l;
}

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
	struct s_stock_str	**ptr;
	int			i;
	int			len;

	arr = (struct s_stock_str *)malloc(ac * sizeof(struct s_stock_str));
	ptr = &arr;
	i = 0;
	len = 0;
	while (i < ac)
	{
		len = ft_strlen(av[ac]);
		ptr[i]->size = len;
		ptr[i]->str = av[ac];
		ft_strncpy(ptr[i]->copy, av[ac], len);
	}
	return (arr);
}
#include <stdio.h>

void	print_stock_str(struct s_stock_str av)
{
	printf("Size : %d\nString : %s (%p)\nCopy : %s (%p)", 
	av.size,
	av.str,
	&av.str,
	av.copy,
	&av.copy
	);
}

int	main(void)
{
	struct s_stock_str	*arr;
	char			**av;
	int			ac;
	int			i;

	ac = 4;
	av = malloc(4 * sizeof(char *));
	char	*s1 = "string un";
	char	*s2 = "string deux";
	char	*s3 = "string 3 !";
	char	*s4 = "chaine de char 4";
	av[0] = s1;
	av[1] = s2;
	av[2] = s3;
	av[3] = s4;

	arr = ft_strs_to_tab(ac, av);
	
	i = 0;
	while (i < ac)
	{
		print_stock_str(arr[i]);
		i++;
	}

	return (0);
}
