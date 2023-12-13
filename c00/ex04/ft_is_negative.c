/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alphbarr <alphbarr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 14:13:38 by alphbarr          #+#    #+#             */
/*   Updated: 2023/11/23 15:36:31 by alphbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_is_negative(int n)
{
	char	ne;
	char	p;

	ne = 'N';
	p = 'P';
	if (n >= 0)
	{
		write (1, &p, 1);
	}
	else
	{
		write (1, &ne, 1);
	}
}