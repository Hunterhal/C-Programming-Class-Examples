#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define ARRAY_SIZE 2

void generate_random_array(float *arr)
{
    for(int i=0; i < ARRAY_SIZE; i++)   
    {
        *(arr) = (((float) rand() / RAND_MAX) * 100) - 50;
        arr++;
    }
}

void generate_unit_array(float *arr, float unit_value)
{
    for(int i=0; i < ARRAY_SIZE; i++)   
    {
        *(arr) = unit_value;
        arr++;
    }
}

void print_array(float *arr)
{
    for(int i=0; i < ARRAY_SIZE; i++)   
    {
        printf( "%.2f ",( *(arr++) ) );
    }
    printf("\n");
}

int main()
{
    float array1[ARRAY_SIZE], array2[ARRAY_SIZE];
    float *ptr1, *ptr2;
    float result = 0;

    ptr1 = array1;
    ptr2 = array2;

    srand(time(NULL));

    generate_random_array(array1);
    generate_unit_array(array2, 2.0);

    print_array(array1);
    print_array(array2);

    for(int i = 0; i < ARRAY_SIZE; i++)
    {
        result += (*(ptr1++)) * (*(ptr2++));
    }

    printf("Dot product of two array is %.2f", result);
    return 0;
}