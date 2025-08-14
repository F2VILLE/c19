/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdeville <fdeville@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 23:01:26 by fdeville          #+#    #+#             */
/*   Updated: 2025/08/11 15:38:04 by fdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
/*#include <stdio.h>
#include <string.h>
int	main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("Usage : %s \"your_string\"", argv[0]);
		return (1);
	}
	printf("strlen    : %lu\n", strlen(argv[1]));
	printf("ft_strlen : %d\n", ft_strlen(argv[1]));
	return (0);
}*/
