/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdeville <fdeville@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 03:50:12 by fdeville          #+#    #+#             */
/*   Updated: 2025/08/12 16:44:07 by fdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = 'a' + (str[i] - 'A');
		}
		i++;
	}
	return (str);
}
/*#include <stdio.h>
int	main(void)
{
	char str[31] = "This is NOT fully UPpercase :(";
	char *a = ft_strupcase(str);
	printf("%s\n", a);
	printf("%s\n", str);
	return (0);
}*/
