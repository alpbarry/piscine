/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alphbarr <alphbarr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 14:17:51 by alphbarr          #+#    #+#             */
/*   Updated: 2023/12/13 14:26:43 by alphbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	char			*val_hex;
	unsigned char	*c;

	c = (unsigned char *)addr;
	val_hex = "0123456789abcdef";
	i = 0;
	while (i < size)
	{
		ft_putchar(val_hex[c[i] / 16]);
		ft_putchar(val_hex[c[i] % 16]);
		if ((i + 1) % 2 == 0)
			ft_putchar('-');
		i++;
	}
	return (addr);
}
