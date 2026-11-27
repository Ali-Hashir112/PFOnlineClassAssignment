#include <stdio.h>

int main()
{
    char sample[6] = "hello\0";
    int size = sizeof(sample)/sizeof(sample[0]) - 1;
    char new[size];

    int i = 0;

    while(sample[i] != '\0')
    {
        new[i] = sample[size - 1 - i];
        i += 1;
    }

    printf("%s" , new);
}