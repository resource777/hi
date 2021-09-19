/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewonki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 16:14:33 by jaewonki          #+#    #+#             */
/*   Updated: 2021/09/18 22:16:11 by jaewonki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*copy_dest;
	char	*copy_src;

	copy_dest = dest;
	copy_src = src;
	while (*copy_dest)
		copy_dest++;
	while (*copy_src)
	{
		*copy_dest = *copy_src;
		copy_dest++;
		copy_src++;
	}
	*copy_dest = 0;
	return (dest);
}
