/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alphbarr <alphbarr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 16:13:48 by alphbarr          #+#    #+#             */
/*   Updated: 2023/12/13 16:39:36 by alphbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_power(int nb, int power)
{
	int	r;

	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	r = 1;
	while (power > 0)
	{
		r *= nb;
		power--;
	}
	return (r);
}
