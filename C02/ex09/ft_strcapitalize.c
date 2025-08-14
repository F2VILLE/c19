/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdeville <fdeville@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 03:53:46 by fdeville          #+#    #+#             */
/*   Updated: 2025/08/14 19:56:02 by fdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	is_alphanum(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	if ((c >= '0' && c <= '9'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	cap;

	i = 0;
	cap = 1;
	while (str[i] != '\0')
	{
		if (cap && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = 'A' + (str[i] - 'a');
		}
		else if (!cap && str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = 'a' + (str[i] - 'A');
		}
		cap = 0;
		if (!is_alphanum(str[i]))
		{
			cap = 1;
		}
		i++;
	}
	return (str);
}
/*#include <stdio.h>
int	main(void)
{
	char str[50] = "hi, how are you? 42words forty-two; fifty+and+one";
	char *a = ft_strcapitalize(str);
	printf("%s\n", a);
	printf("%s\n", str);
	return (0);
}*/
