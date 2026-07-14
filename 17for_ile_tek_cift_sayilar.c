#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//0 dan 10a kadar olan tek ve çift sayýlarý for ýle ekrana yazma
	int i,j;
	
	
	printf("0'dan 10'a kadar olan cift sayilar:");
	for(i=0;i<=10;i+=2)
	{
		printf("%d ",i);
	}
	
	
	printf("0'dan 10'a kadar olan tek sayilar:");
	for(j=1;j<10;j+=2)
	{
		printf("%d ",j);
	}
	
	
	
	
	
	return 0;
}
