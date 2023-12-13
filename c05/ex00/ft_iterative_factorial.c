/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alphbarr <alphbarr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 15:58:59 by alphbarr          #+#    #+#             */
/*   Updated: 2023/12/13 16:08:04 by alphbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_factorial(int nb)
{
	int	i;
	int	r;

	r = 1;
	i = 1;
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	while (i <= nb)
	{
		r = r * i;
		i++;
	}
	return (r);
}
