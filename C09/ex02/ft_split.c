/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdeville <fdeville@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 21:29:02 by fdeville          #+#    #+#             */
/*   Updated: 2025/08/27 22:06:26 by fdeville         ###   ########.fr       */
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

int	malloc_count(char *str, char *charset, char ***arr)
{
	int		i;
	int		j;
	int		count;

	i = 0;
	count = 1;
	while (str[i])
	{
		j = 0;
		while (charset[j] == str[i + j])
			j++;
		if (charset[j] == '\0')
			count++;
	}
	*arr = (char **)malloc(count * sizeof(char *));
	if (!(*arr))
		return (-1);
	return (count);
}

int	find_next(char *str, char *charset)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i + j] == charset[j])
			j++;
		if (charset[j] == '\0')
			return (i + j);
	}
	return (-1);
}

char	*ft_cutstr(char *str, int is, int ie)
{
	
	while (is < ie)
}

char	**ft_split(char *str, char *charset)
{
	char	**arr;
	int		count;
	int		i;
	int		j;
	int		last_idx;
	
	if ((count = malloc_count(str, charset, &arr)) < 0)
		return (NULL);
	i = 0;
	last_idx = 0;
	while (i < count - 1)
	{
		j = last_idx;
		last_idx = j + find_next(&str[j], charset);
		arr[i] = ft_cutstr(str, j, last_idx);
	}
	return (arr);
}

int	main(int argc, char *argv[])
{
	if (argc != 3)
		return (1);
	char	**strs = ft_split(argv[1], argv[2]);
	while (strs[i])
	{
		write(1, strs[i], ft_strlen(strs[i]));
		i++;
	}
	return (0);
}
