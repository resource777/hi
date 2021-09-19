/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewonki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 22:26:17 by jaewonki          #+#    #+#             */
/*   Updated: 2021/09/19 00:49:59 by jaewonki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;
	char			*cp;

	cp = str;
	if (cp == 0)
		return (0);
	i = 0;
	while (cp[i] != 0)
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int		dlen;
	unsigned int		slen;
	unsigned int		to;
	unsigned int		from;

	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	if (size <= dlen)
		return (slen + size);
	to = size - dlen - 1;
	from = 0;
	while (from < to)
	{
		dest[dlen + from] = src[from];
		from++;
	}
	dest[to] = 0;
	return (slen + dlen);
}
