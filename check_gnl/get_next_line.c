/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewonki <jaewonki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 15:20:20 by jaewonki          #+#    #+#             */
/*   Updated: 2022/01/31 15:20:20 by jaewonki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*free_init(char *p)
{
	free(p);
	p = 0;
	return (0);
}

char	*get_line(char *sentence)
{
	char	*line;
	size_t	i;

	i = 0;
	while (sentence[i] != '\n' && sentence[i])
		i++;
	if (sentence[i] == '\n')
		i++;
	line = malloc(i + 1);
	if (!line)
		return (0);
	i = 0;
	while (sentence[i] != '\n' && sentence[i])
	{
		line[i] = sentence[i];
		++i;
	}
	if (sentence[i] == '\n')
	{
		line[i] = '\n';
		i++;
	}
	line[i] = 0;
	return (line);
}

char	*read_line(int fd, char *sentence)
{
	char	*buf;
	ssize_t	read_bite;

	buf = malloc(BUFFER_SIZE + 1);
	if (!buf)
		return (0);
	read_bite = read(fd, buf, BUFFER_SIZE);
	while (read_bite > 0)
	{
		buf[read_bite] = '\0';
		sentence = ft_strjoin(sentence, buf);
		if (ft_strchr(sentence, '\n') || !sentence)
			break ;
		read_bite = read(fd, buf, BUFFER_SIZE);
	}
	free(buf);
	if (read_bite < 0)
		return (0);
	return (sentence);
}

char	*get_next_line(int fd)
{
	static char		*sentence;
	char			*line;

	if (fd < 0 || BUFFER_SIZE < 1)
		return (0);
	sentence = read_line(fd, sentence);
	if (!sentence)
		return (0);
	if (!*sentence)
		return (free_init(sentence));
	line = get_line(sentence);
	if (!line)
	{
		free(sentence);
		sentence = NULL;
		return (0);
	}
	sentence = ft_strdup(sentence + ft_strlen(line));
	if (!sentence)
		return (0);
	return (line);
}
