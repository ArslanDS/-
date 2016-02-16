#include <stdio.h>

int main()
{
    const int max_size =4;
    int a[max_size];
    a[0]=1;
    a[1]=4;
    a[2]=7;
    a[3]=5;
    for (int i=0; i<max_size-1; i++)
    {
        for (int i=0; i<max_size-i-1; i++)
        {
            if (a[i]>a[i+1])
            {
                int temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
    }
    return 0;
