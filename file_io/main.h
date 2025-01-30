#ifndef MAIN_H
#define MAIN_H

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#define BUF_SIZE 1024
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int check_args(int argc);
int open_file(const char *filename, int flags, mode_t mode);
void copy_content(int fd_from, int fd_to);
void close_file(int fd);
#endif /* MAIN_H */

