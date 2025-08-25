/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdeville <fdeville@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 20:00:20 by fdeville          #+#    #+#             */
/*   Updated: 2025/08/25 17:26:48 by fdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	char	*ptr;

	i = 0;
	j = 0;
	if (!to_find[j])
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] && str[i + j] == to_find[j])
		{
			if (j == 0)
				ptr = str + i;
			j++;
		}
		if (to_find[j] == '\0')
			return (ptr);
		i++;
	}
	return (0);
}
/* #include <stdio.h>
#include <string.h>
int	main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Missing args");
		return (1);
	}

	printf("%s\n", strstr(argv[1], argv[2]));
	printf("%s\n", ft_strstr(argv[1], argv[2]));
	return (0);
}*/
