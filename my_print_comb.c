/*
** EPITECH PROJECT, 2020
** My Print Comb
** File description:
** 
*/
void my_putchar(char c);

void my_putchar2(char c, char d, char  u)
{
    my_putchar(c);
    my_putchar(d);
    my_putchar(u);
}

int while_u(char c, char d, char u)
{
    while (u <= '9') {
        if (c == '7' && d == '8' && u == '9')
            my_putchar2(c, d, u);
        else {
            my_putchar2(c, d, u);
            my_putchar(',');
            my_putchar(' ');
        }
        u = u + 1;
    }
    return (u);
}

int my_print_comb(void)
{
    char c = 48; 
    char d = 48;
    char u = 0;

    while (c <= '7') {
        d=c+1;
        while (d <= '8') {
            u=d+1;
            u = while_u(c, d, u);
            d+=1;
        }
        c+=1;
    }
    return (0);
}
