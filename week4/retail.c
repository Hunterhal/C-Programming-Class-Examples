#include "stdio.h"

int main()
{
    //Varaibles
    //Variables can be assigned differently
    //Price Variables
    float price1 = 2.98, price2 = 4.50, price3 = 9.98;
    float price4 = 4.49;
    float price5;
    price5 = 6.87;

    //All product sum
    float all_product_sum = 0;

    //Product type
    int product_type;

    //Product count
    int product_count;

    //Print product list
    printf("Prodduct Number    Retail Price\n"
           "---------------    -------------\n"
           "1                  %f\n"
           "2                  %f\n"
           "3                  %f\n"
           "4                  %f\n"
           "5                  %f\n\n", price1, price2, price3,
           price4, price5);

    printf("First enter product number and enter the count number, as 1 10\n");
    printf("Seperate by using comma\nTo Exit enter 0 as product count\n\n");
    while(1)
    {
        printf("Enter: ");
        
        scanf("%d,%d", &product_type, &product_count);
 
        printf("\nDEBUG: Enter %d,%d\n", product_type, product_count);
        switch (product_type)
        {
            case (1):
            printf("DEBUG: 1\n");
                all_product_sum += (float) product_count * price1;
                break;

            case (2):
                all_product_sum += (float) product_count * price2;
                break;

            case (3):
                all_product_sum += (float) product_count * price3;
                break;

            case (4):
                all_product_sum += (float) product_count * price4;
                break;

            case (5):
                all_product_sum += (float) product_count * price5;
                break;
            
            default:
                printf("DEBUG: DEFAULT\n");
                break;
        }

        if(product_type == 0)
            break;

        printf("\n\nTotal sum is :%f\n\n", all_product_sum);
        fflush(stdout);
    }
    
    return 0;
}