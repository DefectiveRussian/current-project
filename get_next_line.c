/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekhamid <dekhamid@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 16:46:16 by dekhamid          #+#    #+#             */
/*   Updated: 2024/11/28 21:08:17 by dekhamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static	char	*reader(int	fd, char *buffer, char *quicksave)
{
	int	read_result;

	read_result = 1;
	while (read_result != '\0')
	{	
		read_result = read(fd, buffer, BUFFER_SIZE);
		if (read_result == -1)
			return (0);
	}
}

char	*get_next_line(int fd)
{
	char			*buffer;
	char			*out;
	static	char	*quicksave;
	
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	char* c = (char*)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (0);
	out = reader(fd, buffer, quicksave);
	free(buffer);
	if (!out)
		return (0);
	
	return (0);
}

