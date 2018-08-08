int        ft_putchar(char c);

void    ad_last_block(char a, char b);

void    ad_print_numbers(char a, char b, char c, char d);

void    ft_print_comb2(void)
{
    char a;
    char b;
    
    a = '0';
    while (a <= '9')
    {
        b = '0';
        while (b <= '9')
        {
            ad_last_block(a, b);
            b++;
        }
        a++;
    }
}

void    ad_last_block(char a, char b)
{
    char c;
    char d;
    
    c = a;
    while (c <= '9')
    {
        d = b + 1;
        while (d <= '9')
        {
            ad_print_numbers(a, b, c, d);
            if (!(a == '9' && b == '8' && c == '9' && d == '9'))
            {
                ft_putchar(',');
                ft_putchar(' ');
            }
            d++;
        }
        c++;
    }
}

void    ad_print_numbers(char a, char b, char c, char d)
{
    ft_putchar(a);
    ft_putchar(b);
    ft_putchar(' ');
    ft_putchar(c);
    ft_putchar(d);
}
