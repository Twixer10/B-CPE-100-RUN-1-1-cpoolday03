/*
** EPITECH PROJECT, 2020
** My Print Comb2
** File description:
** 
*/
void my_putchar(char c);

void put_cmb2(char a1, char a2, char b1, char b2)
{
    my_putchar(a1);
    my_putchar(a2);
    my_putchar(' ');
    my_putchar(b1);
    my_putchar(b2);
    if (a1 != '9' || a2 != '8' || b1 != '9' || b2 != '9') {
        my_putchar(',');
        my_putchar(' ');
    }
}

char set_sup_nbr(char *b2, char *b1, char *a2, char *a1)
{
    *b2 += 1;
    if (*b2 == '9' + 1) {
        *b2 = '0';
        *b1 += 1;
    }
    if (*b1 == '9' + 1) {
        *b1 = '0';
        *a2 += 1;
    }
    if (*a2 == '9' + 1) {
        *a2 = '0';
        *a1 += 1;
    }
}

int my_print_comb2(void)
{
    char a1 = '0';
    char a2 = '0';
    char b1 = '0';
    char b2 = '0';
    int comb_a = (a1 - '0') * 10 + (a2 - '0');
    int comb_b = (b1 - '0') * 10 + (b2 - '0');

    while (a1 != '9' || a2 != '8' || b1 != '9' || b2 != '9') {
        if (comb_a >= comb_b);
        else
            put_cmb2(a1, a2, b1, b2);
        set_sup_nbr(&b2, &b1, &a2, &a1);
        comb_a = (a1 - '0') * 10 + (a2 - '0');
        comb_b = (b1 - '0') * 10 + (b2 - '0');
    }
    put_cmb2(a1, a2, b1, b2);
    return (0);
}
