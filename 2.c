#include <stdio.h>

int secondLargest(int num[5])
{
    int largest = 0;
    int second = 0;
    for(int i = 0 ; i < 5 ; i++)
    {
        if(i == 0)
        {
            continue;
        }
        if(num[i] > num[largest])
        {
            second = largest;
            largest = i;
        }
        else if(num[i] > num[second])
        {
            second = i;
        }
    }
    return num[second];
}

int main()
{
    int num[5] = {1 , 2 , 3 , 4 , 5};

    printf("%d" , secondLargest(num));
}