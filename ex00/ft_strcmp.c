/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewonki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 10:19:45 by jaewonki          #+#    #+#             */
/*   Updated: 2021/09/19 10:32:16 by jaewonki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char*s1, char*s2)
{
	int				i;
	unsigned char	*c1;
	unsigned char	*c2;

	c1 = (unsigned char *)s1;
	c2 = (unsigned char *)s2;
	i = 0;
	while (c1[i] != 0 && c2[i] != 0)
	{
		if (c1[i] == c2[i])
		{
			i++;
			continue ;
		}
		else
			break ;
	}
	return (c1[i] - c2[i]);
}
