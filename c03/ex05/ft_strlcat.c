/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alphbarr <alphbarr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 18:22:50 by alphbarr          #+#    #+#             */
/*   Updated: 2023/12/06 18:54:23 by alphbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_len(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	ld;
	unsigned int	ls;

	i = ft_len(dest);
	j = 0;
	ld = ft_len(dest);
	ls = ft_len(src);
	if (size < 1)
		return (ls + size);
	while (src[j] != '\0' && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	if (size < ld)
		return (ls + size);
	else
		return (ld + ls);
}
