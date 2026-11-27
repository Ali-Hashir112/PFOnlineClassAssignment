#include <stdio.h>

int main()
{
    int sample = 12345;
    int digit;
    int count = 0;
    int new = 0;

    while(sample != 0)
    {
        new = new * 10;
        
        digit = sample % 10;
        sample = (sample - digit)/10;
        
        new += digit;

        count += 1;
    }

    printf("%d" , new);
    
}