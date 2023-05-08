#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/* read_textfile - Reads a text file and prints it to the POSIX standard output */
ssize_t read_textfile(const char *filename, size_t letters);

/* create_file - Creates a file and writes a given text content */
int create_file(const char *filename, char *text_content);

/* append_text_to_file - Appends a given text content to a file */
int append_text_to_file(const char *filename, char *text_content);
int main(int argc, char *argv[]);
int main(int argc, char **argv);

#endif /* MAIN_H */

