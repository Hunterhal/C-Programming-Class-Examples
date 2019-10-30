// This code calculate and stores 10 fibonacci numbers in array

#include <stdio.h>

int main()
{
    int fib_array[10];

    fib_array[0] = 0;
    fib_array[1] = 1;

    for(int i=2; i<10; i++)
    {
        fib_array[i] = fib_array[i-1] + fib_array[i-2];
    }

    printf("Fibonacci sequence is ");
    for(int i=0; i<10; i++)
    {
        printf("%d ", fib_array[i]);
    }

    return 0;
}