/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdeville <fdeville@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 03:14:36 by fdeville          #+#    #+#             */
/*   Updated: 2025/08/07 03:44:38 by fdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = 'A' + (str[i] - 'a');
		}
		i++;
	}
	return (str);
}
/*#include <stdio.h>
int	main(void)
{
	char str[25] = "This is not uppercase :(";
	char *a = ft_strupcase(str);
	printf("%s\n", a);
	printf("%s\n", str);
	return (0);
}*/
