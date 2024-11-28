/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekhamid <dekhamid@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 16:56:48 by dekhamid          #+#    #+#             */
/*   Updated: 2024/11/28 17:58:26 by dekhamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>

# ifndef BUFFER_SIZE
#define BUFFER_SIZE 100

static	size_t	ft_vibecheck(char const *s, unsigned int start, size_t len);
size_t			ft_strlen(const char *s);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strdup(const char *s);
char			*ft_strrchr(const char *s, int c);
static	char	*reader(int	fd, char *buffer, char *quicksave);
char			*get_next_line(int fd);

#endif
#endif