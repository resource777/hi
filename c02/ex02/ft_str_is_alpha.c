/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewonki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 15:19:38 by jaewonki          #+#    #+#             */
/*   Updated: 2021/09/21 14:18:39 by jaewonki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alpha(char ch)
{
	if (ch >= 'a' && ch <= 'z')
		return (1);
	if (ch >= 'A' && ch <= 'Z')
		return (1);
	else
		return (0);
}

int	ft_str_is_alpha(char*str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (!is_alpha(str[i]))
			return (0);
		i++;
	}
	return (1);
}
