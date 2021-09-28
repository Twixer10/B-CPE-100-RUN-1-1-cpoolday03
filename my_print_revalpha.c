/*
** EPITECH PROJECT, 2020
** My Print Revalpha
** File description:
** 
*/
void my_putchar(char c);

int my_print_revalpha(void)
{
    int i =122;
    while (i > 96)
    {
        my_putchar(i);
        i = i - 1;
    }
    return (0);
}
