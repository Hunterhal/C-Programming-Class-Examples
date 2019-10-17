#include <stdio.h>

int main()
{
    int small_number = 0x7FFFFFFF;
    int entered_number = 0;
    char control = 'Y';

    while(1)
    {
        printf("Enter Number and Control ");
        scanf("%d", &entered_number);

        if(entered_number < small_number)
        {
            small_number = entered_number;
        }
        
        printf("Entered is %d, smallest number is %d\n", entered_number, small_number);

        printf("Do you want to exit Y/N");
        scanf("%c", &control);
        printf("%c", control);
        if(control == 'N' || control == 'n')
            break;
    }

    return 0;
}