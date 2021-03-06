/*
** EPITECH PROJECT, 2021
** my_puterror
** File description:
** print the str in param in the error output
*/

#include "lib.h"
#include <unistd.h>

int my_puterror(char *str, int error_num)
{
    int len = 0;

    if (!str) {
        write(2, "error: missing str for my_puterror\n", 36);
        return 84;
    }
    len = strlen(str);
    write(2, str, len);
    return error_num;
}

char *my_puterror_s(char *str)
{
    int len = 0;

    if (!str) {
        write(2, "error: missing str for my_puterror\n", 36);
        return NULL;
    }
    len = strlen(str);
    write(2, str, len);
    return NULL;
}
