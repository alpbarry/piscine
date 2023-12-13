/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alphbarr <alphbarr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 13:22:06 by alphbarr          #+#    #+#             */
/*   Updated: 2023/11/23 13:45:22 by alphbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	l;

	l = 'a';
	while (l <= 'z')
	{
		write (1, &l, 1);
		l++;
	}
}
/*
int	main()
{
	ft_print_alphabet();
	return 0;
}*/
