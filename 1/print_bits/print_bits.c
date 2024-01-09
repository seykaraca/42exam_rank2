#include <unistd.h>

void	print_bits(unsigned char octet)
{
    int bit = 7;
    unsigned char result;
    while(bit >= 0)
    {
        result = (octet >> bit & 1) + '0';
        write(1, &result, 1);
        bit--;
    }
}