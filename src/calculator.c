/*
** EPITECH PROJECT, 2025
** calculator
** File description:
** No file there, just an epitech header example.
** You can even have multiple lines if you want!
*/

#include "../include/my.h"

char *read_input(void)
{
    int size = 0;
    char *input = NULL;
    char *new_input;
    char buf[1];
    
    while (read(0, buf, 1) > 0 && buf[0] != '\n') {
        new_input = malloc(size + 2);
        if (!new_input) return NULL;
        for (int j = 0; j < size; j++)
            new_input[j] = input ? input[j] : 0;
        new_input[size] = buf[0];
        new_input[size + 1] = '\0';
        free(input);
        input = new_input;
        size++;
    }
    return input;
}

int calculate(char *in)
{
    int i = 0;
    int a;
    int b;
    int r = 0;
    char op;

    a = my_atoi(in, &i);
    while (in[i] == ' ') i++;
    op = in[i++];
    b = my_atoi(in, &i);
    if (op == '+') r = a + b;
    else if (op == '-') r = a - b;
    else if (op == '*') r = a * b;
    else if (op == '/') {
        if (b == 0) return -2147483648;
        r = a / b;
    } else return 2147483647;
    return r;
}

