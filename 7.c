#include <stdio.h>

int sum(int curr)
{
    if(curr == 0)
    {
        return 0;
    }
    
    int digit = curr % 10;
    curr =  (curr - digit)/10;

    return digit + sum(curr);
}

int main()
{
    int x = 12345;

    printf("%d" , sum(x));
}