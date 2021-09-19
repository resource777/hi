/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewonki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 16:31:11 by jaewonki          #+#    #+#             */
/*   Updated: 2021/09/18 22:15:20 by jaewonki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*copy_dest;
	char			*copy_src;
	unsigned int	i;

	i = 0;
	copy_dest = dest;
	copy_src = src;
	while (*copy_dest)
		copy_dest++;
	while (i < nb && *copy_src)
	{
		*copy_dest = *copy_src;
		copy_dest++;
		copy_src++;
		i++;
	}
	*copy_dest = 0;
	return (dest);
}
