#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <limits.h>
#include <time.h>

extern char **environ;

int d_prompt(const char *prompt, unsigned int size);
int verify_bltin(char **args, int exit_status);
int strcmpr(char *strng1, char *strng2);
char *strdupl(char *str);
int path_verify(char **args);
int cmd_not_found(char **arg, int count);
int strleng(const char *str);
int print_num(int n);
int _putchar(char c);
int verify_file(char *pathname);
void free_grid(char **grid, int heigth);
void last_free(char *entry);
char *concat_command(char *dir_path, char *command);
int execute(char **arguments);
int tokens(char *entry, char **arguments);
char *get_environ(char *global_var);

#endif
