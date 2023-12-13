/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alphbarr <alphbarr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:27:56 by alphbarr          #+#    #+#             */
/*   Updated: 2023/12/06 14:40:58 by alphbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_hex(int n, char *r)
{
	if (n < 10)
	{
		*r = n + '0';
	}
	else
	{
		*r = n - 10 + 'a';
	}
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	j;
	char	k;
	char	hex_j;
	char	hex_k;

	i = -1;
	while (str[++i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			write(1, &str[i], 1);
		}
		else
		{
			j = (unsigned char) str[i] / 16;
			k = (unsigned char)str[i] % 16;
			ft_hex(j, &hex_j);
			ft_hex(k, &hex_k);
			write(1, "\\", 1);
			write(1, &hex_j, 1);
			write(1, &hex_k, 1);
		}
	}
}
/*
int	main()
{
	char	str[] = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(str);
	return (0);
}*/
