/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdeville <fdeville@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 21:40:05 by fdeville          #+#    #+#             */
/*   Updated: 2025/08/25 17:27:24 by fdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && i < n)
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	if (s1[i] && s2[i])
		i--;
	if (s1[i] != s2[i])
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}
/*#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	*a = "le texte";
	char	*b = "le pas texte";
	char	*c = "pas le texte";

	printf("%d %d\n", strncmp(a, b, 3), strncmp(a, b, 8));
	printf("%d %d\n", strncmp(a, c, 3), strncmp(a, c, 8));
	printf("%d %d\n", ft_strncmp(a, b, 3), ft_strncmp(a, b, 8));
	printf("%d %d\n", ft_strncmp(a, c, 3), ft_strncmp(a, c, 8));
	return (0);
}*/
