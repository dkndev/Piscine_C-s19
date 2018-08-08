int     ft_putchar(char c);


void    ft_print_comb2(void)
{
    char a;
    char b;
    char c;
    char d;
    
    a = '0';
    while (a <= '9')
    {
        b = '0';
        while (b <= '9')
        {
            
            c = '0';
            while (c <= '9')
            {
                d = '0';
                while (d <= '9')
                {
                    ft_putchar(a);
                    ft_putchar(b);
                    ft_putchar(' ');
                    ft_putchar(c);
                    ft_putchar(d);
                    if (!(a == '9' && b == '9' && c == '9' && d == '9'))
                    {
                        ft_putchar(',');
                        ft_putchar(' ');
                    }
                    else
                    {
                        ft_putchar('\n');
                    }
                    
                  d++;
                }
                c++;
            }
            
            
            b++;
        }
        a++;
    }
}


