/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdeville <fdeville@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 21:29:02 by fdeville          #+#    #+#             */
/*   Updated: 2025/08/28 20:29:57 by fdeville         ###   ########.fr       */
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
		i++;
	}
	*arr = (char **)malloc((count + 1) * sizeof(char *));
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
		i++;
	}
	return (-1);
}

char	*ft_cutstr(char *str, int is, int ie)
{
	char	*out;
	int		i;

	out = (char *)malloc((ie - is + 1) * sizeof(char));
	i = 0;
	while (i < (ie - is))
	{
		out[i] = str[is + i];
		i++;
	}
	out[i] = '\0';
	return (out);
}

char	**ft_split(char *str, char *charset)
{
	char	**arr;
	int		count;
	int		i;
	int		j;
	int		last_idx;
	int		next_pos;

	count = malloc_count(str, charset, &arr);
	if (count < 0)
		return (NULL);
	i = 0;
	last_idx = 0;
	while (i < count)
	{
		j = last_idx;
		next_pos = find_next(&str[j], charset);
		if (next_pos == -1)
			last_idx = ft_strlen(str);
		else
			last_idx = j + next_pos;
		arr[i] = ft_cutstr(str, j, last_idx);
		i++;
		if (next_pos == -1)
			return (arr);
	}
	return (arr);
}
/*
#include <unistd.h>
int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	if (argc != 3)
		return (1);
	char	**strs = ft_split(argv[1], argv[2]);
	while (strs[i])
	{
		write(1, strs[i], ft_strlen(strs[i]));
		write(1, "\n", 1);
		i++;
	}
	return (0);
}*/
