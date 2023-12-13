/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alphbarr <alphbarr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 14:02:50 by alphbarr          #+#    #+#             */
/*   Updated: 2023/11/28 14:18:09 by alphbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_rev_int_tab(int	*tab, int size)
{
	int	s;
	int	e;
	int	t;

	s = 0;
	e = size -1;
	if (s >= e)
	{
		return ;
	}
	while (s < e)
	{
		t = tab [s];
		tab[s] = tab[e];
		tab[e] = t;
		s++;
		e--;
	}
}
