#include "get_next_line.h"
#include <fcntl.h> // open() flags
#include <stdio.h>
#include <unistd.h>

static	char	*reader(int	fd, char *buffer, char *quicksave)
{
	int	read_result;
	char	*temp;

	read_result = 1;
	while (read_result != '\0')
	{	
		read_result = read(fd, buffer, BUFFER_SIZE);
		if (read_result == -1)
			return (0);
		else if (read_result == 0)
			break;
		buffer[read_result] = '\0';
		if (!quicksave)
			quicksave = ft_strdup("");
		temp = quicksave;
		quicksave = ft_strjoin
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

// char	*readster(int fd)
// {	
// 	int	sz;
// 	char* c = (char*)malloc(sizeof(char) * (BUFFER_SIZE + 1));
// 	sz = read(fd, c, BUFFER_SIZE);
// 	printf("Called read(%d, c, %d).\n\nReturned that %d bytes were read.\n\n", fd, BUFFER_SIZE, sz);
//     c[sz] = '\0';
//     printf("Those bytes are as follows:\n\n%s\n", c);

	
// 	sz = read(fd, c, BUFFER_SIZE);
// 	printf("Called read(%d, c, %d).\n\nReturned that %d bytes were read.\n\n", fd, BUFFER_SIZE, sz);
//     c[sz] = '\0';
//     printf("Those bytes are as follows:\n\n%s\n", c);
// 	return (c);
// }

// int	main(void)
// {
// 	int	fd = open("bee.txt", O_RDONLY);
// 	readster(fd);
// 	close(fd);
// 	return (0);
// }
