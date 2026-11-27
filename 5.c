#include <stdio.h>

int main()
{
    char sample[12] = "hello world\0";
    int size = sizeof(sample)/sizeof(sample[1]);

    int cons = 0;
    int vowels = 0;

    for(int i = 0 ; i < size ; i++)
    {
        if(sample[i] == 'a' || sample[i] == 'e' || sample[i] == 'i' || sample[i] == 'o' || sample[i] == 'u')
        {
            vowels += 1;
        }
        else if(sample[i] != ' ' && sample[i] != '\0')
        {
            cons += 1;
        }
    }

    printf("%d %d", vowels , cons);
}