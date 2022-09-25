#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	float a,b,kontrol=1;
	char secim;
	
	printf("******* HESAP MAKINESI *******\n\n");
	
	while (kontrol!=0)
	{
		printf("isleminizi giriniz (+ - * /)\n");
		scanf("%f",&a);
		scanf("%c",&secim);
		scanf("%f",&b);
		
		switch(secim)
		{
			case '+':printf("%.2f+%.2f=%.2f\n",a,b,a+b);
				break;
			case '-':printf("%.2f-%.2f=%.2f\n",a,b,a-b);
				break;
			case '*':printf("%.2f*%.2f=%.2f\n",a,b,a*b);
				break;
			case '/':printf("%.2f/%.2f=%.2f\n",a,b,a/b);
				break;
			default:printf("yanlis secim yaptiniz: ");
				break;	
		}
		printf("isleminize devam etmek icin 0 disinda bir sayiya basiniz,uygulamayi bitirmek icin 0'a basin \n");
		scanf("%d",&kontrol);
			
	}
		printf("uygulamadan basariyla ciktiniz :)\n");
	
	
	
	

	return 0;
}
