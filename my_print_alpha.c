/*
** EPITECH PROJECT, 2020
** My Print Alpha
** File description:
** 
*/
void my_putchar(char c);

int my_print_alpha(void)
{
    int i =97;

    while (i < 123)
    {
        my_putchar(i);
        i+=1;
    }
    return (0);
}
