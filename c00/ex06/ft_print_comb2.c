/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alphbarr <alphbarr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 17:23:59 by alphbarr          #+#    #+#             */
/*   Updated: 2023/11/24 19:13:57 by alphbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(int i)
{
	write(1, &i, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_putchar(i / 10 + '0');
			ft_putchar(i % 10 + '0');
			write(1, " ", 1);
			ft_putchar(j / 10 + '0');
			ft_putchar(j % 10 + '0');
			if (!(i == 98 && j == 99))
			{
				write(1, ", ", 2);
			}
			j++;
		}
		i++;
	}
}
