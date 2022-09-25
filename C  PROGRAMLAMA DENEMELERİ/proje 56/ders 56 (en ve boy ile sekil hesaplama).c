#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	
	// klavyeden girilen en ve boy deðerlerine göre þekil oluþturma
	
	int en,boy,i,j;
	
	printf("en degerini giriniz:  ");
	scanf("%d",&en);
	
	printf("boy degerini giriniz:  ");
	scanf("%d",&boy);
	
	printf("\n");
	
	for (i=1;i<=boy;i++)	
	{
		for(j=1;j<=en;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	
	
	
	
	
	
	
	return 0;
}
