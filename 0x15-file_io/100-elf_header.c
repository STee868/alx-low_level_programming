#include <stdio.h>
#include <string.h>
#include "main.h"

int main(int argc, char **argv) {
    Elf64_Ehdr header;
    FILE *file;

    if (argc != 2) {
        printf("Usage: %s <ELF file>\n", argv[0]);
        return 1;
    }

    file = fopen(argv[1], "rb");
    if (!file) {
        printf("Error: could not open file %s\n", argv[1]);
        return 1;
    }

    if (fread(&header, sizeof(header), 1, file) != 1) {
        printf("Error: could not read ELF header from file %s\n", argv[1]);
        return 1;
    }

    if (memcmp(header.e_ident, ELFMAG, SELFMAG) != 0) {
        printf("Error: %s is not an ELF file\n", argv[1]);
        return 1;
    }

    print_magic(header.e_ident);
    print_class(header.e_ident[EI_CLASS]);
    print_data(header.e_ident[EI_DATA]);
    print_abiversion(header.e_ident[EI_VERSION]);
    print_type(header.e_type);
    print_machine(header.e_machine);
    print_version(header.e_version);
    print_entry(header.e_entry);
    print_phoff(header.e_phoff);
    print_shoff(header.e_shoff);
    print_flags(header.e_flags);
    print_ehsize(header.e_ehsize);
    print_phentsize(header.e_phentsize);
    print_phnum(header.e_phnum);
    print_shentsize(header.e_shentsize);
    print_shnum(header.e_shnum);
    print_shstrndx(header.e_shstrndx);

    fclose(file);
    return 0;
}

