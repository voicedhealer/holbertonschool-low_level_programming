#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <unistd.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void print_error(const char *msg);
void display_elf_header(int fd);
const char *get_osabi_string(unsigned char osabi);
const char *get_type_string(uint16_t type);


#endif /* MAIN_H */