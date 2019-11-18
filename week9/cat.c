#include <stdio.h>
#include <string.h>

#define STRING_SIZE 100

int main()
{
    char input_str1[STRING_SIZE];
    char input_str2[STRING_SIZE];
    char *ptr1, *ptr2;

    ptr1 = input_str1;
    ptr2 = input_str2;

    printf("Enter first string: ");
    gets(input_str1);

    printf("Enter second string: ");
    gets(input_str2);

    while((*ptr1) != '\0')
    {
        ptr1++;
    }

    (*ptr1) = ' ';

    while((*ptr2) != '\0')
    {
        *(++ptr1) = (*ptr2++);
    }

    printf("Last string is %s\n", input_str1);

    printf("%s", strcat(input_str1, input_str2));
    return 0;
}