#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//kullanýcýdan üç adet sayý alýp hangýsýnýn buyuk oldugunu bulan program
	int a,b,c;
	printf("uc adet sayi giriniz.\n");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a>=b&&a>=c)
	{
		printf("en buyuk sayiniz %ddir.",a);
	}
	else if(b>=c&&b>=a)
	{
		printf("en buyuk sayiniz %ddir.",b);
	}
	else
	{
		printf("en buyuk sayiniz %ddir.",c);
	}
	
	
	
	
	
	
	
	
	return 0;
}
