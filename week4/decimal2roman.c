#include <stdio.h>

int main()
{
    int sayi;
    int bolum;
    int kalan;

    for(sayi = 1; sayi <= 100; sayi++)
    {
        printf("%d     ", sayi);
        if(sayi == 100)
            printf("C");

        else
        {
            //50 ile islem
            bolum = sayi / 50;
            kalan = sayi % 50;

            //printf("DEBUG: kalan %d bolum %d", kalan, bolum);

            if(bolum > 0)
            {
                printf("L");
            }

            //10 ile islem
            bolum = kalan / 10;
            kalan = kalan % 10;

            while(bolum > 0 )
            {
                printf("X");
                bolum--;
            }

            //5 ile islem
            bolum = kalan / 5;
            kalan %= 5;

            if(bolum > 0)
            {
                printf("V");
            }

            //1 ile işlem
            while(kalan >0)
            {
                printf("I");
                kalan = kalan - 1;
            }
                
        printf("\n");
        }


        
    }

    return 0;
}