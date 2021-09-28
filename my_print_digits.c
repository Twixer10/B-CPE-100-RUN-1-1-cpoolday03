/*
** EPITECH PROJECT, 2020
** My Print Digits
** File description:
** 
*/
void my_putchar(char c);

int my_print_digits(void)
{
    int i =48;
    while (i < 58)
    {
        my_putchar(i);
        i+=1;
    }
    return (0);
}
