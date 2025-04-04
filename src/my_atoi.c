/*
** EPITECH PROJECT, 2025
** calculator
** File description:
** No file there, just an epitech header example.
** You can even have multiple lines if you want!
*/

#include "../include/my.h"

int my_atoi(char *str, int *i)
{
    int sign = 1;
    int result = 0;

    while (str[*i] == ' ')
        (*i)++;
    if (str[*i] == '-') {
        sign = -1;
        (*i)++;
    }
    while (str[*i] >= '0' && str[*i] <= '9') {
        result = result * 10 + (str[*i] - '0');
        (*i)++;
    }
    return result * sign;
}