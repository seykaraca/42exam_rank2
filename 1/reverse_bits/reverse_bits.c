unsigned char	reverse_bits(unsigned char octet)
{
    unsigned char result;
    int bit = 7;
    while(bit >= 0)
    {
        result = (result * 2) + (octet % 2);
        octet /= 2;
        bit--;
    }
    return(result);
}
