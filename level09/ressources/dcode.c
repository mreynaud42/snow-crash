
#include <stdio.h>

int main()
{
    unsigned char str[] = "f4kmm6p|=\x82\x7Fp\x82n\x83\x82\x44\x42\x83\x44u{\x7F\x8C\x89";

    printf("\"%s\"\n", str);
    int i = 0;
    while (str[i])
    {
        printf("[%d]: \"%c\" => ", str[i], str[i]);
        str[i] = str[i] - i;
        printf("[%d]: \"%c\"\n", str[i], str[i]);
        i++;
    }

    printf("\"%s\"\n", str);
    
    return (1);
}