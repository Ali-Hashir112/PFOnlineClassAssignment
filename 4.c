#include <stdio.h>

int main()
{
    int current = 0;
    for(int i = 0 ; i < 4 ; i++)
    {
        for(int j = 0 ; j <= i ; j ++)
        {
            current += 1;
            printf("%d " , current);
        }
        
        printf("\n");
    }
}