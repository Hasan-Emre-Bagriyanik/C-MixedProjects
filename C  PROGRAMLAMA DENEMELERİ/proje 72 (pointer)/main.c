#include <stdio.h>
#include <stdlib.h>

int main()
{

    int sayi=100;
    int *s=&sayi;

    printf("adres: %x\n",s);

    s++;
    printf("adres2: %x\n",s);

    s--;
    printf("adres3: %x\n",s);

    s=s+5;
    printf("adres4: %x\n",s);


    return 0;
}
