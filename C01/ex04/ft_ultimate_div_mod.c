/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdeville <fdeville@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 15:46:38 by fdeville          #+#    #+#             */
/*   Updated: 2025/08/05 17:07:57 by fdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	mod;
	int	div;

	div = *a / *b;
	mod = *a - (*b * div);
	*a = div;
	*b = mod;
}
//int	main(void)
//{
//	int a;
//	int b;
//
//	a = 19;
//	b = 4;
//	ft_ultimate_div_mod(&a, &b);
//	printf("%d %d\n", a, b);
//	return (0);
//}
