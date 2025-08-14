/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdeville <fdeville@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 08:24:48 by fdeville          #+#    #+#             */
/*   Updated: 2025/08/07 08:47:34 by fdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if (s1[i] != s2[i])
	{
		return (s1[i] - s2[i]);
	}
	return (0);
}
/*#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	*a = "meow meow";
	char	*b = "meow meow";
	char	*c = "meow meo";

	printf("%d %d %d\n", ft_strcmp(a, b), ft_strcmp(a, c), ft_strcmp(c, a));
	printf("%d %d %d\n", strcmp(a, b), strcmp(a, c), strcmp(c, a));
	return (0);
}*/
