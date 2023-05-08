#include "main.h"
#include <string.h>
/* create_file - Creates a file and writes a given text content */

int create_file(const char *filename, char *text_content)
{
	int fd, w;
	mode_t mode = S_IRUSR | S_IWUSR; /* rw------- */

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, mode);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		w = write(fd, text_content, strlen(text_content));
		if (w == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
