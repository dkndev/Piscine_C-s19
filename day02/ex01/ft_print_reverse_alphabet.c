int     ft_putchar(char c);

void    ft_print_alphabet(void)
{
    char a;
    
    a = 'z';
    while (a >= 'a')
    {
        ft_putchar(a);
        a--;
    }
}
