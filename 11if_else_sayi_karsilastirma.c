#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x;
	int y;
	printf("kiyaslamak istediginiz birinci sayiyi giriniz:");
	scanf("%d",&x);
	printf("kiyaslamak istediginiz ikinci sayiyi giriniz:");
	scanf("%d",&y);
	
	if(x>y)
	{
		printf("%d sayisi %d sayisindan buyuktur.",x,y);
	}
	else if(x<y)
	{
		printf("%d sayisi %d sayisindan kucuktur.",x,y);
	}
	else
	{
		printf("%d sayisi %d sayisina esittir",x,y);
	}
	
	
	
	
	
	return 0;
}
