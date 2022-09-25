#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *dosya;
    dosya=fopen("C:\\Users\\Hasan Emre\\Desktop\\emre.txt","r");

    char karakter;
    do
    {
        karakter=getc(dosya);
        printf("%c",karakter);


    }
    while (karakter!=EOF);


    fclose(dosya);




    return 0;
}
