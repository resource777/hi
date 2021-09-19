/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewonki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 21:41:26 by jaewonki          #+#    #+#             */
/*   Updated: 2021/09/19 10:37:36 by jaewonki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
char	*ft_strstr(char*str, char*to_find)
{
	int		s_idx;
	int		t_idx;

	if (*to_find)
		return (str);
	s_idx = 0;
	while (str[s_idx] != 0)
	{
		t_idx = 0;
		while (str[s_idx + t_idx] == to_find[t_idx])
		{
			t_idx++;
			if (to_find[t_idx] == 0)
				return (str + s_idx);
		}
		s_idx++;
	}
	return (0);
}
int main(void)
{
	char t1[] = "abcabc";
	char t2[] = "1";
	char * s;
	s = ft_strstr(t1, t2);
	printf("%s\n", s);
	return 0;
}
