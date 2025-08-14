/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdeville <fdeville@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 17:22:57 by fdeville          #+#    #+#             */
/*   Updated: 2025/08/05 17:28:31 by fdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	int		i;
	char	c[1];

	i = 0;
	while (str[i] != '\0')
	{
		c[0] = str[i];
		write(1, &c, 1);
		i++;
	}
}
/*
int	main(void)
{
	char *str = "this is a test !";
	ft_putstr(str);
}
*/
