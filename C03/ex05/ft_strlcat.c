/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdeville <fdeville@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 22:21:45 by fdeville          #+#    #+#             */
/*   Updated: 2025/08/25 17:29:42 by fdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = ft_strlen(dest);
	while (src[i] != '\0' && (len + i) < size - 1)
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (len + i);
}
#include <stdio.h>
#include <bsd/string.h>

int	main(void)
{
	char	a[20] = "Hello, ";
	char	b[20] = "World!";
	char	c[20] = "Hello, ";
	char	d[20] = "World!";

	printf("%zu\n%d\n\n", strlcat(a, b, 20), ft_strlcat(c, d, 20));

	printf("%s\n\n", a);
	printf("%s\n\n", c);
}
