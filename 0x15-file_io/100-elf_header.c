#include "main.h"
#include <elf.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUF_SIZE 128

int main(int argc, char **argv)
{
    int fd, i;
    Elf64_Ehdr header;

    if (argc != 2)
    {
        dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
        exit(1);
    }

    fd = open(argv[1], O_RDONLY);
    if (fd == -1)
    {
        perror("Error opening file");
        exit(1);
    }

    if (read(fd, &header, sizeof(header)) != sizeof(header))
    {
        perror("Error reading file");
        exit(1);
    }

    printf("ELF Header:\n");
    printf("Magic:");

    for (i = 0; i < EI_NIDENT; i++)
        printf("%02x ", header.e_ident[i]);
    printf("\n");

    printf("Class:%s\n", header.e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
    printf("Data:%s\n", header.e_ident[EI_DATA] == ELFDATA2MSB ? "big-endian" : "little-endian");
    printf("Version:%d\n", header.e_ident[EI_VERSION]);
    printf("OS/ABI:%d\n", header.e_ident[EI_OSABI]);
    printf("ABI Version:%d\n", header.e_ident[EI_ABIVERSION]);
    printf("Type:%d\n", header.e_type);
    printf("Entry point address:0x%lx\n", header.e_entry);
    printf("Start of program headers:%ld (bytes into file)\n", header.e_phoff);
    printf("Start of section headers:%ld (bytes into file)\n", header.e_shoff);
    printf("Flags:0x%x\n", header.e_flags);
    printf("Size of this header:%d (bytes)\n", header.e_ehsize);
    printf("Size of program headers:%d (bytes)\n", header.e_phentsize);
    printf("Number of program headers:%d\n", header.e_phnum);
    printf("Size of section headers:%d (bytes)\n", header.e_shentsize);
    printf("Number of section headers:%d\n", header.e_shnum);
    printf("Section header string table index:%d\n", header.e_shstrndx);

    if (close(fd) == -1)
    {
        perror("Error closing file");
        exit(1);
    }

    return (0);
}

