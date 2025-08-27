/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdeville <fdeville@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 19:46:13 by fdeville          #+#    #+#             */
/*   Updated: 2025/08/27 22:40:02 by fdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *s)
{
	int	l;

	l = 0;
	while (s[l])
		l++;
	return (l);
}

int	malloc_total(int size, char **strs, char *sep, char **out)
{
	int	sep_len;
	int	total;
	int	i;

	sep_len = ft_strlen(sep);
	total = 0;
	i = 0;
	while (i < size)
	{
		total += ft_strlen(strs[i]);
		if (i < size - 1)
			total += sep_len;
		i++;
	}
	total++;
	*out = (char *)malloc(total * sizeof(char));
	if (!(*out))
		return (-1);
	return (total);
}

char	*ft_strcat(char *s1, char *s2)
{
	int	l;
	int	i;

	l = ft_strlen(s1);
	i = 0;
	while (s2[i])
	{
		s1[l + i] = s2[i];
		i++;
	}
	s1[l + i] = '\0';
	return (s1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*out;
	int		i;

	if (size == 0)
	{
		out = (char *)malloc(sizeof(char));
		out[0] = '\0';
		return (out);
	}
	if (malloc_total(size, strs, sep, &out) < 0)
		return (NULL);
	i = 0;
	while (i < size)
	{
		out = ft_strcat(out, strs[i]);
		if (i < size - 1)
			out = ft_strcat(out, sep);
		i++;
	}
	return (out);
}
/* #include <stdio.h>
int	main(int argc, char *argv[])
{
	printf("%s\n", ft_strjoin(argc, argv, ", "));
	return (0);
}*/
