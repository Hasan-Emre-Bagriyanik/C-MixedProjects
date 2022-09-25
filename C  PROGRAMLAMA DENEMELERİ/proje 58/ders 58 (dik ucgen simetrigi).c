#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	// klavyeden girilen boy deðerine göre dik üçgen ve simetriðini hesaplama
	
	int i,j,boy;
	
	printf("boy degerini giriniz:  ");
	scanf("%d",&boy);
	
	printf("\n\n");
	
	for(i=1;i<=boy;i++)	
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	for(i=boy;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	
	
	return 0;
}
