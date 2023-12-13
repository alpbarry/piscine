/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alphbarr <alphbarr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 16:49:36 by alphbarr          #+#    #+#             */
/*   Updated: 2023/12/13 16:57:54 by alphbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	else if (index == 0)
	{
		return (0);
	}
	else if (index == 1)
	{
		return (1);
	}
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
