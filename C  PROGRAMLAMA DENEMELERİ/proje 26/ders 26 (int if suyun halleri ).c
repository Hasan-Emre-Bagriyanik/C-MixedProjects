#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	// klavyeden girilen dereceye göre suyun durumunu yazdýran program...
	
	int x;
	printf("bir derece girin  ");
	scanf("%d",&x);
	
	if(x<=0)
	{ printf("su buz seklindedir");
	}
	if(0<x && x<100)
	{printf("su sivi seklindedir");
	}
	if(x>=100)
	{printf("su buhar seklindedir");
	}
	
	
	return 0;
}
