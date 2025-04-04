/*
** EPITECH PROJECT, 2025
** calculator
** File description:
** No file there, just an epitech header example.
** You can even have multiple lines if you want!
*/

#include "../../include/my.h"

void my_putstr(char *str)
{
    while (*str)
        write(1, str++, 1);
}