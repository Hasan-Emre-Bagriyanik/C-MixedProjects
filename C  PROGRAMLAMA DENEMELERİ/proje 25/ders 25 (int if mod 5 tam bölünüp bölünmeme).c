#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	// klavyeden girilen sayý 5'e tam bölünüyorsa...
	
	int sayi;
	
	printf("bir sayi giriniz  ");
	scanf("%d",& sayi);
	
	
	if(sayi%5==0)
	{ printf("sayi tam bolunuyor :)");
	}
	else
	{ printf("sayi tam bolunmuyor :(");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
