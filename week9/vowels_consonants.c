#include <stdio.h>

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
        if((*p) == 'a' || (*p) == 'A')
            counter++;
        
        p++;
    }

    printf("There is %d time character a or A is used.", counter);
    return 0;
}