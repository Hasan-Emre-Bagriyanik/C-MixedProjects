#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	
	
	//fibonacci serisinde ilk 10 say�n�n de�eri ka�t�r?
	
	
	int a,b,c,i;
	a=1;
	b=1;
	
	printf("%d\n",a);
	printf("%d\n",b);
	
	for(i=1;i<=8;i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d\n",c);
	}
	
	
	
	
	
	return 0;
}
