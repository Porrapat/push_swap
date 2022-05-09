#include <unistd.h>
#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int main()
{
	int fd;
	char *abc;

	fd = open("test.txt", O_RDONLY);
	abc = get_next_line(0);

	// printf("%s", abc);
	// write(1, abc, ft_strlen(abc));
}