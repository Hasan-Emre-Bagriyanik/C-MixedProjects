#include <stdio.h>
#include <stdlib.h>



int main()
{
    int i;
    float toplam=0,carpim=0,n;


    for (n=1;n<=20;n++)
    {


        for (i=1,toplam=0;i<=n;i++)
        {


            toplam=toplam+(i-n)/(i+n);


        }

            carpim=carpim*n;

    }

            printf("cevap  :  %.3f\n",carpim);
            getch();

    return 0;
}


