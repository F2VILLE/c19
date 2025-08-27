/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdeville <fdeville@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 18:39:32 by fdeville          #+#    #+#             */
/*   Updated: 2025/08/26 19:12:42 by fdeville         ###   ########.fr       */
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

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

void	sort_args(int argc, char *argv[], int *arg_idxs)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < argc - 2)
	{
		j = 0;
		while (j < argc - 2)
		{
			if (ft_strcmp(argv[arg_idxs[j]], argv[arg_idxs[j + 1]]) > 0)
			{
				temp = arg_idxs[j];
				arg_idxs[j] = arg_idxs[j + 1];
				arg_idxs[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

void	print_arg(char *s)
{
	write(1, s, ft_strlen(s));
	write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	int	arg_idxs[argc - 1];
	int	i;

	if (argc == 1)
		return (0);
	i = 0;
	while (i < argc - 1)
	{
		arg_idxs[i] = i + 1;
		i++;
	}
	i = 0;
	sort_args(argc, argv, arg_idxs);
	while (i < argc - 1)
	{
		print_arg(argv[arg_idxs[i]]);
		i++;
	}
	return (0);
}
