#include <stdio.h>
#include <stdlib.h>

int main()
{
    int satir,sutun,i,j;

    printf("satir sayisini giriniz: ");
    scanf("%d",&satir);

    printf("sutun sayisini giriniz: ");
    scanf("%d",&sutun);

    int dizi1[satir][sutun];

    for (i=0;i<satir;i++)
    {
        for(j=0;j<sutun;j++)
        {
            printf("\n dizinin degeri [%d][%d]=",i+1,j+1);
            scanf("%d",&dizi1[i][j]);
        }
    }

    printf("\n\ndizi1'in degerleri\n");

    for(i=0;i<satir;i++)
    {
        for(j=0;j<sutun;j++)
        {
            printf("%d ",dizi1[i][j]);
        }
        printf("\n");
    }

    printf("\n\n\n");


    printf("satir sayisini giriniz: ");
    scanf("%d",&satir);

    printf("sutun sayisini giriniz: ");
    scanf("%d",&sutun);

    int dizi2[satir][sutun];

    for( i=0;i<satir;i++)
    {
        for(j=0;j<sutun;j++)
        {
            printf("\ndizinin degeri [%d][%d]=",i+1,j+1);
            scanf("%d",&dizi2[i][j]);
        }
    }

    printf("\ndizi2'in degerleri\n");

    for(i=0;i<satir;i++)
    {
        for( j=0;j<sutun;j++)
        {
            printf("%d ",dizi2[i][j]);
        }
        printf("\n");
    }
    printf("\n\n\n");


    int toplam[satir][sutun];

    for (i=0;i<satir;i++);
    {
        for(j=0;j<sutun;j++)
        {
            toplam[i][j]=dizi1[i][j]+dizi2[i][j];
        }
    }

    for(i=0;i<satir;i++)
    {
        for(j=0;j<sutun;j++)
        {
            printf("%d ",toplam[i][j]);
        }
        printf("\n");
    }


    return 0;
}
