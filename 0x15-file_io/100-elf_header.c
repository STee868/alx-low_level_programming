#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

#define BUF_SIZE 256

int main(int argc, char **argv) {
    int fd;
    ssize_t nread;
    char buf[BUF_SIZE];
    Elf64_Ehdr header;

    if (argc != 2) {
        fprintf(stderr, "Usage: %s <ELF file>\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    fd = open(argv[1], O_RDONLY);
    if (fd == -1) {
        perror("open");
        exit(EXIT_FAILURE);
    }

    nread = read(fd, &header, sizeof(header));
    if (nread != sizeof(header)) {
        fprintf(stderr, "Error reading ELF header\n");
        exit(EXIT_FAILURE);
    }

    if (header.e_ident[EI_MAG0] != ELFMAG0 ||
        header.e_ident[EI_MAG1] != ELFMAG1 ||
        header.e_ident[EI_MAG2] != ELFMAG2 ||
        header.e_ident[EI_MAG3] != ELFMAG3) {
        fprintf(stderr, "Invalid ELF header\n");
        exit(EXIT_FAILURE);
    }

    printf("ELF file type: ");
    switch (header.e_type) {
        case ET_NONE:
            printf("None\n");
            break;
        case ET_REL:
            printf("Relocatable\n");
            break;
        case ET_EXEC:
            printf("Executable\n");
            break;
        case ET_DYN:
            printf("Shared object\n");
            break;
        case ET_CORE:
            printf("Core\n");
            break;
        default:
            printf("Unknown\n");
    }

    printf("ELF machine architecture: ");
    switch (header.e_machine) {
        case EM_NONE:
            printf("None\n");
            break;
        case EM_386:
            printf("Intel 80386\n");
            break;
        case EM_X86_64:
            printf("AMD x86-64 architecture\n");
            break;
        case EM_ARM:
            printf("ARM\n");
            break;
        case EM_AARCH64:
            printf("AArch64\n");
            break;
        default:
            printf("Unknown\n");
    }

    printf("ELF header version: %d\n", header.e_version);

    printf("ELF OS/ABI: ");
    switch (header.e_ident[EI_OSABI]) {
        case ELFOSABI_SYSV:   
            printf("UNIX - System V\n");
            break;
        case ELFOSABI_HPUX:
            printf("HP-UX\n");
            break;
        case ELFOSABI_NETBSD:
            printf("NetBSD\n");
            break;
        default:
            printf("Unknown\n");
    }

    close(fd);
    exit(EXIT_SUCCESS);
}

