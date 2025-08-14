/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdeville <fdeville@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 23:24:02 by fdeville          #+#    #+#             */
/*   Updated: 2025/08/07 02:07:56 by fdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_char_is_alpha(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!ft_char_is_alpha(str[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*#include <stdio.h>
int		main(void)
{
	int a = ft_str_is_alpha("Testundeuxtrois");
	int b = ft_str_is_alpha("Test123");
	printf("%d %d\n", a, b);
	return (0);
} */
