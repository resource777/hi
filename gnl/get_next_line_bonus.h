/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewonki <jaewonki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:36:32 by jaewonki          #+#    #+#             */
/*   Updated: 2022/01/31 16:36:32 by jaewonki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_fd_lst
{
	int				fd;
	char			*keep;
	struct s_fd_lst	*prev;
	struct s_fd_lst	*next;
}	t_fd_lst;

char			*get_line(char *keep);
char			*read_file(int fd, char *keep);
t_fd_lst		*find_fd(int fd, t_fd_lst *head);
char			*gnl_or_del(t_fd_lst **fd_lst);
char			*get_next_line(int fd);

size_t			ft_strlen(const char *s);
size_t			ft_strlcpy(char *dst, const char *src, size_t size);
char			*ft_strchr(const char *s, int c);
char			*ft_strdup(const char *s1);
char			*ft_strjoin(char const *s1, char const *s2);

#endif
