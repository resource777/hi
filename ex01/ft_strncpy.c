/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewonki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 11:14:37 by jaewonki          #+#    #+#             */
/*   Updated: 2021/09/14 11:29:06 by jaewonki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strncpy(char*dest, char*src, unsigned int n)
{
	int		i;
	int		j;

	i = 0;
	while (src[i] != 0)
		i++;
	j = 0;
	while (j < n)
	{
		if (j >= i)
			dest[j] = 0;
		dest[j] = src[j];
		j++;
	}
	return (dest);
}
