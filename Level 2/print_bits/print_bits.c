#include <unistd.h>
// 1 :
void	print_bits(unsigned char octet)
{
    int i = 0;
    char tab[8];
    while (i < 8)
    {
        tab[i] = '0';
        i++;
    }
    i--;
    while (octet && i >= 0)
    {
        tab[i] = octet % 2 + 48;
        octet /= 2;
        i--;
    }
    i = 0;
    while (i < 8)
    {
        write(1, &tab[i], 1);
        i++;
    }
    
}
// 2 :
void print_bits(unsigned char octet)
{
    int i = 7;
    while (i >= 0) {
        char bit = (octet & (1 << i)) ? '1' : '0';
        i--;
        ft_putchar(bit);
    }
}
// chose !