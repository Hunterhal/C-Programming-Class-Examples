// This code element-wise multiplies two vectors and generate new vector

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//Random integer generator copied from stackoverflow
//Search for code block online and use them in your code

int main()
{

    int vector1[10];
    int vector2[10];
    int result[10];
    int dot_product_result = 0;

    srand(time(NULL));   // Initialization, should only be called once.


    printf("First Random Vector\n");
    for(int i = 0; i < 10; i++)
    {
        vector1[i] = rand() % 10;      // Returns a pseudo-random integer between 0 and 10.
        printf("%d ", vector1[i]);
    }
    printf("\n");

    printf("Second Random Vector\n");
    for(int i = 0; i < 10; i++)
    {
        vector2[i] = rand() % 10;      // Returns a pseudo-random integer between 0 and 10.
        printf("%d ", vector2[i]);
    }
    printf("\n");

    //Element-wise multiply vectors
    for(int i=0; i<10; i++)
    {
        result[i] = vector1[i] * vector2[i];
    }

    printf("Resulting Vector\n");
    for(int i = 0; i < 10; i++)
    {
        printf("%d ", result[i]);
    }
    printf("\n");
   
    //Bonus dot-product result
    for(int i = 0; i < 10; i++)
    {
        dot_product_result += result[i];
    }
    printf("Dot-product is %d\n", dot_product_result);

    return 0;
}