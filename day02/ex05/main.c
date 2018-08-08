
#include <unistd.h>
#include "ft_print_comb2.c"

int        ft_putchar(char c)
{
    write(1, &c, 1);
    return(0);
}

int        main()
{
    ft_print_comb2();
    return(0); 
}
