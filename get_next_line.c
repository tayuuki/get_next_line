#include "get_next_line.h"


ssize_t	reading(int fd, char *line)
{
	int i;

	i = 0;
	while (read(fd, line, BUFFER_SIZE) > 0)
	{
			line[i] = buffer[i];
			i++;
	}
	return (line);
}

char *get_next_line(int fd)
{
	static char *line;
	int readed;

	readed = read(fd, line, BUFFER_SIZE);
	line = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	while (readed > 0 || line
}

