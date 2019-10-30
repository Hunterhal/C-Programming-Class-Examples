// This code finds the largest element in randomly generated array

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//Random integer generator copied from stackoverflow
//Search for code block online and use them in your code

#define ARRAY_MAX 10

int main()
{

    int array[ARRAY_MAX];
    int largest = 0;
    srand(time(NULL));   // Initialization, should only be called once.


    printf("First Generate Array of Random Integers\n");
    for(int i = 0; i < ARRAY_MAX; i++)
    {
        array[i] = rand() % 100;      // Returns a pseudo-random integer between 0 and 100.
        printf("%d ", array[i]);
    }
    printf("\n");

    //Check if the array element is larger than largest variable
    for(int i=0; i<ARRAY_MAX; i++)
    {
        if(array[i] > largest)
            largest = array[i];
    }

    printf("Largest Integer Inside the Array is: %d\n", largest);

    return 0;
}
