#include <stdio.h>
#include <string.h>

#define STRING_SIZE 100

int main()
{
    char input_str[STRING_SIZE];
    char *p;

    int counter = 0;

    p = input_str;

    printf("Enter a string: ");
    gets(input_str);

    while((*p) != '\0')
    {
        counter++;
        p++;
    }

    printf("Length of string is %d and size of pointer is %d\n", counter, sizeof(input_str));

    printf("Length of string is %d\n", strlen(input_str));

    return 0;
}