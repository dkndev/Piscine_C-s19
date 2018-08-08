int     ft_putchar(char c);

void    ft_print_numbers(void)
{
    char n = '0';
    
    while (n <= '9')
    {
        ft_putchar(n);
        n++;
    }
}
