/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdeville <fdeville@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 15:38:23 by fdeville          #+#    #+#             */
/*   Updated: 2025/08/11 15:44:54 by fdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}
/*int	main(int argc, char *argv[])
{
	if (argc == 1)
	{
		ft_putstr("Usage : ./ft_putstr \"Your string\"");
		return (1);
	}
	ft_putstr(argv[1]);
	return (0);
}*/
