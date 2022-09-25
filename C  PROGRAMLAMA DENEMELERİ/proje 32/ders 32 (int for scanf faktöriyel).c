#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int sayi;
	int i;
	int faktor=1;
	
	printf("faktoryelini alacaginiz sayiyi giriniz  ");
	scanf("%d",&sayi);
	
	for(i=1;i<=sayi;i++)
	{
		faktor=faktor*i;	
	}
	printf("sonucunuz:  %d",faktor);
	
	
	
	
	
	
	
	
	
	return 0;
}
