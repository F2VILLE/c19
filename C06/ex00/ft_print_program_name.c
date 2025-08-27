/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdeville <fdeville@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 18:11:53 by fdeville          #+#    #+#             */
/*   Updated: 2025/08/26 18:38:46 by fdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *s)
{
	int	l;

	l = 0;
	while (s[l])
		l++;
	return (l);
}

int	main(int argc, char *argv[])
{
	if (argc > 0)
	{
		write(1, argv[0], ft_strlen(argv[0]));
		write(1, "\n", 1);
	}
	return (0);
}
