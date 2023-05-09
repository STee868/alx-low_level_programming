#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

/* read_textfile - Reads a text file and prints it to the POSIX standard output */
ssize_t read_textfile(const char *filename, size_t letters);

/* create_file - Creates a file and writes a given text content */
int create_file(const char *filename, char *text_content);

/* append_text_to_file - Appends a given text content to a file */
int append_text_to_file(const char *filename, char *text_content);
int main(int argc, char *argv[]);
void print_magic(unsigned char e_ident[]);
void print_class(unsigned char e_ident);
void print_data(unsigned char e_ident);
void print_abiversion(unsigned char e_ident);
void print_type(Elf64_Half e_type);
void print_machine(Elf64_Half e_machine);
void print_version(Elf64_Word e_version);
void print_entry(Elf64_Addr e_entry);
void print_phoff(Elf64_Off e_phoff);
void print_shoff(Elf64_Off e_shoff);
void print_flags(Elf64_Word e_flags);
void print_ehsize(Elf64_Half e_ehsize);
void print_phentsize(Elf64_Half e_phentsize);
void print_phnum(Elf64_Half e_phnum);
void print_shentsize(Elf64_Half e_shentsize);
void print_shnum(Elf64_Half e_shnum);
void print_shstrndx(Elf64_Half e_shstrndx);
#endif /* MAIN_H */

