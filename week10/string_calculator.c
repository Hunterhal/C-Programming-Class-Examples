#include <stdio.h>

#define TRUE 1
#define FALSE 0
#define STR_SIZE 100

int check_digit(const char* arr)
{
    int counter = 0;

    while(*arr != '\0')
    {
        if(*arr < '0' || *arr > '9')
        {
            printf("%d element of array is not digit", counter);
            return FALSE;
        }
        counter ++;
        arr++;
    }
    return TRUE;
}

int strlen(const char *arr)
{
    int len=0;

    while(*arr != '\0')
    {
        len++;
        arr++;
    }

    return len;
}
int power10(int exp)
{
    int sum = 1;
    while(exp != 0)
    {
        sum *= 10;
        exp--;
    }
    return sum;
}
int str_to_int(const char *arr)
{
    int length = strlen(arr);
    int sum = 0;

    while(*arr != '\0')
    {
        sum += ((*arr) - '0') * power10(length - 1);
        length--;
        arr++;
    }
    printf("Converterted value is %d \n", sum);
    return sum;
}

int main()
{
    char str1[STR_SIZE], str2[STR_SIZE]; 
    int op1, op2;
    do
    {
        printf("Input first operand: ");
        gets(str1);
    } while (!check_digit(str1));
    
    op1 = str_to_int(str1);

    do
    {
        printf("Input second operand: ");
        gets(str2);
    } while (!check_digit(str2));

    op2 = str_to_int(str2);

    printf("Summation is %d\n", op1 + op2);

    return 0;
}