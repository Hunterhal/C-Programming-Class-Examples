// This code finds the pairs in array that gives the desired sum

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//Random integer generator copied from stackoverflow
//Search for code block online and use them in your code

int main()
{

    int array[20];
    int sum = 0;
    srand(time(NULL));   // Initialization, should only be called once.

    printf("First Generate Array of Random Integers\n");
    for(int i = 0; i < 20; i++)
    {
        array[i] = rand() % 10;      // Returns a pseudo-random integer between 0 and 10.
        printf("%d ", array[i]);
    }
    printf("\n");

    printf("Enter the desired sum ");
    scanf("%d", &sum);
    printf("\n");

    //To check the desired we need to indexes 
    for(int i=0; i<20; i++)
    {
        //Attention to j=i
        for(int j=i; j<20; j++)
        {
            if(array[i] + array[j] == sum)
                printf("Summation of %dth %d, and %dth %d are\t %d\n", i, array[i], j, array[j], sum);
        }
    }

    return 0;
}