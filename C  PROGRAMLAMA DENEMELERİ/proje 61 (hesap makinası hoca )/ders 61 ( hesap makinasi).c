#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	
	int a,b;
	char devam='e';
	char secim;
	
	printf("***** hesap makinasý *****\n\n");
devam:	
	printf("toplama icin 1\n");
	printf("cikarma icin 2\n");
	printf("carpma icin 3\n");
	printf("bolme icin 4\n");
	scanf("%s",&secim);
	
	switch (secim)
	{
		case '1':
			printf("toplamak istediginiz birinci sayiyi giriniz \n");
			scanf("%d",&a);
			printf("toplamak istediginiz ikinci sayiyi giriniz \n");
			scanf("%d",&b);
			printf("%d+%d=%d\n",a,b,a+b);
			break;
			
		case '2':
			printf("cikarmak istediginiz birinci sayiyi giriniz \n");
			scanf("%d",&a);
			printf("cikarmak istediginiz ikinci sayiyi giriniz \n");
			scanf("%d",&b);
			printf("%d+%d=%d\n",a,b,a-b);
			break;
			
		case '3':
			printf("carpma istediginiz birinci sayiyi giriniz \n");
			scanf("%d",&a);
			printf("carpma istediginiz ikinci sayiyi giriniz \n");
			scanf("%d",&b);
			printf("%d+%d=%d\n",a,b,a*b);
			break;
		case '4':
			printf("bolme istediginiz birinci sayiyi giriniz \n");
			scanf("%d",&a);
			printf("bolme istediginiz ikinci sayiyi giriniz \n");
			scanf("%d",&b);
			printf("%d+%d=%d\n",a,b,a/b);
			break;
			
		default :
			printf("hatali islem kodu girdiniz: \n");
			goto devam;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
