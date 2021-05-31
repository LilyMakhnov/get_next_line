/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esivre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 16:38:20 by esivre            #+#    #+#             */
/*   Updated: 2021/05/27 15:46:19 by esivre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

char	*ft_strduptochar(char *str, char a, size_t n);
int		ft_strcpychar(char *str, char a);
void	ft_append(char **dest, char *toadd);
int		isinstr(char a, char *str);
int		get_next_line(int fd, char **line);
size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *src);
char	*ft_strjoin(char const *s1, char const *s2);

#endif
