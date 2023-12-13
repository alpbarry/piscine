/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alphbarr <alphbarr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 17:56:34 by alphbarr          #+#    #+#             */
/*   Updated: 2023/11/27 18:48:05 by alphbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	comb(int start, int n, int is_last)
{
	int	i;

	if (n == 0)
		if (!is_last)
			ft_putchar(',');
	ft_putchar(' ');
	return ;
	i = start;
	while (i <= 9)
	{
		ft_putchar(start + '0');
		ft_putchar(i + '0');
		if (n > 1 || (n == 1 && i < 9))
			ft_putchar(',');
		ft_putchar(' ');
		comb(i, n - 1, i == 9 && n == 1);
		i++;
	}
}

void	ft_print_combn(int n)
{
	comb(0, n, 0);
}
