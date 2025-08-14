/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdeville <fdeville@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 04:03:19 by fdeville          #+#    #+#             */
/*   Updated: 2025/08/14 20:12:58 by fdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (i);
}
/*#include <stdio.h>
#include <bsd/string.h>
int	main(void)
{
	char	*src = "Blabla bla c'est du txt";
	char	buff[10];
	int len;

	len = ft_strlcpy(buff, src, 10);
	printf("Dest : %s\nSrc : %s\nLen %d\n", buff, src, len);

	char	b2[10];
	len = strlcpy(buff, src, 10);
	b2[9] = '\0';
	printf("Dest : %s\nSrc : %s\nLen %d\n", b2, src, len);
	return (0);
}*/
