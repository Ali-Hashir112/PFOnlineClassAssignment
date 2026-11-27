#include <stdio.h>

int countEven(int size, int num[size])
{
    int even = 0;
    for(int i = 0 ; i < size ; i++)
    {
        if(num[i] % 2 == 0)
        {
            even += 1;
        }
    }
    return even;
}

int main()
{
    int num[5] = {1 , 2 , 3 , 4 , 5};
    int size = sizeof(num)/sizeof(num[0]);

    printf("%d" , countEven(size , num));
}