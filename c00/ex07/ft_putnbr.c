/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alphbarr <alphbarr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 17:26:30 by alphbarr          #+#    #+#             */
/*   Updated: 2023/11/27 13:43:30 by alphbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	i;

	if (nb == -2147483647 - 1)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write (1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	i = nb % 10 + '0';
	write(1, &i, 1);
}
/*
int	main()
{
	int	n1;
	int	n;

	n1 = 145278;
	n = -1234;
	ft_putnbr(n1);
	ft_putnbr(n);
	return (0);
}*/
