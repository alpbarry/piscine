/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alphbarr <alphbarr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 17:57:23 by alphbarr          #+#    #+#             */
/*   Updated: 2023/12/04 17:43:11 by alphbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size == 0)
	{
		return (ft_strlen(src));
	}
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src [i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}
/*
int	main()
{
	char	str[] = "Hello, World!";
	char	dest[100];
	ft_strlcpy(dest, str, sizeof(10));
	return (0);
}*/
