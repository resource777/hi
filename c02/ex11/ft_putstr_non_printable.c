/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewonki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 12:47:13 by jaewonki          #+#    #+#             */
/*   Updated: 2021/09/21 13:31:50 by jaewonki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	w_not_printable(char ch)
{
	unsigned char	uc;
	char			*hex;
	int				fir;
	int				sec;

	hex = "0123456789abcdef";
	uc = (unsigned char)ch;
	fir = uc / 16;
	sec = uc % 16;
	write(1, "\\", 1);
	write(1, &hex[fir], 1);
	write(1, &hex[sec], 1);
}

void	ft_putstr_non_printable(char*str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 32 && str[i] <= 126)
			write(1, &str[i], 1);
		else
			w_not_printable(str[i]);
		i++;
	}
}
