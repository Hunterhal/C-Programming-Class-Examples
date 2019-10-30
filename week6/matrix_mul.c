// This code multiplies two matrix

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//Random integer generator copied from stackoverflow
//Search for code block online and use them in your code

int main()
{

    int matrix1[3][3];
    int matrix2[3][3];
    int result[3][3];

    srand(time(NULL));   // Initialization, should only be called once.

    //Diffrent from the vector now, two index needeed
    printf("First Random Matrix\n");
    for(int i = 0; i < 3; i++)
    {
        for(int j=0; j<3; j++)
        {
            matrix1[i][j] = (rand() % 10) -5;      // Returns a pseudo-random integer between -5 and 5.
            printf("%d\t", matrix1[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("Second Random Matrix\n");
    for(int i = 0; i < 3; i++)
    {
        for(int j=0; j<3; j++)
        {
            matrix2[i][j] = (rand() % 10) -5;      // Returns a pseudo-random integer between -5 and 5.
            printf("%d\t", matrix2[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("Clear Result Matrix\n");
    for(int i = 0; i < 3; i++)
    {
        for(int j=0; j<3; j++)
        {
            result[i][j] = 0;
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }
    printf("\n");


    //Multiply two matrix
    for(int m1_row=0; m1_row<3; m1_row++)
    {
        for(int m2_col=0; m2_col<3; m2_col++)
        {
            //i is the between value 3xi * ix3
            for(int i=0; i<3; i++)
            {
                result[m1_row][m2_col] += matrix1[m1_row][i] * matrix2[i][m2_col];
            }
        }
    }

    printf("Result Matrix\n");
    for(int i = 0; i < 3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}