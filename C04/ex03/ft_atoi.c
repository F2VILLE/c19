/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdeville <fdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 15:52:24 by fdeville          #+#    #+#             */
/*   Updated: 2025/08/25 22:20:35 by fdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

int	whitespace(char c)
{
	return (c == ' '
		|| c == '+'
		|| c == '\n'
		|| c == '\t'
		|| c == '\v'
		|| c == '\f'
		|| c == '\r');
}

int	ft_atoi(char *str)
{
	int	out;
	int	negative;

	out = 0;
	negative = 1;
	while (*str != '\0')
	{
		if (is_digit(*str))
			out = (out * 10) + (*str - '0');
		else if ((*str == '-') && out == 0)
			negative *= -1;
		else if (!(whitespace(*str) && out == 0))
			return (out * negative);
		str++;
	}
	return (out * negative);
}
/*#include <stdio.h>
int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Usage : %s \"your-int\"", argv[0]);
		return (1);
	}
	printf("Integer : %d\n\nDivide by two : %d\n",
	ft_atoi(argv[1]),
	ft_atoi(argv[1]) / 2);
	return (0);
}*/
