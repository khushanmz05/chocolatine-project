/*
** EPITECH PROJECT, 2025
** calculator
** File description:
** No file there, just an epitech header example.
** You can even have multiple lines if you want!
*/

#include "include/my.h"

int main(void)
{
    char *in = read_input();
    int res;

    if (!in) {
    return 84;
    }
    res = calculate(in);
    if (res == -2147483648) {
        my_putstr("Cannot divide by zero\n");
    } else if (res == 2147483647) {
        my_putstr("Unsupported operator\n");
    } else {
        my_putstr("Result: ");
        my_putnbr(res);
        my_putchar('\n');
    }
    free(in);
    return 0;
}