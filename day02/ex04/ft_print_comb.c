int     ft_putchar(char c);

void    jp_putchar(char x, char y, char z);

void    ft_print_comb(void)
{
    char a;
    char b;
    char c;
    
    a = '0';
    while (a <= '7') {
        b = a + 1;
        while (b <= '8') {
        
            c = b + 1;
            while (c <= '9') {
                ft_putchar(a);
                ft_putchar(b);
                ft_putchar(c);
                if(a!='7' || b!='8' || c != '9')
                {
                    ft_putchar(',');
                    ft_putchar(' ');
                }
                else
                {
                    ft_putchar('\n');
                }
                c++;
            }
            b++;
        }
        a++;
    }
}
