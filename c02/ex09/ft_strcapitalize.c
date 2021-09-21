/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewonki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 20:15:34 by jaewonki          #+#    #+#             */
/*   Updated: 2021/09/21 12:06:24 by jaewonki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_prev_cap(char*x, int p_idx)
{
	if (x[p_idx] >= 'A' && x[p_idx] <= 'Z')
		return (1);
	else if (x[p_idx] >= '0' && x[p_idx] <= '9')
		return (1);
	else if (x[p_idx] >= 'a' && x[p_idx] <= 'z')
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char*str)
{
	int		i;

	i = 0;
	while (str[i] != 0)
	{
		if (i == 0 && str[0] >= 'a' && str[0] <= 'z')
		{
			str[0] -= ('a' - 'A');
		}
		else if (i > 0 && is_prev_cap(str, i - 1))
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 'a' - 'A';
		}
		else if (i > 0 && !is_prev_cap(str, i - 1))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 'a' - 'A';
		}
		i++;
	}
	return (str);
}
