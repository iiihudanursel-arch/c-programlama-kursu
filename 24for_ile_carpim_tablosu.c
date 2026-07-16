#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//kullanýcýdan bir deger alýp 10 a kadar olan sayýlarýn carpýmý ekrana yazan program
	int i,sayi;
	printf("sayi giriniz:");
	scanf("%d",&sayi);
	
	
	for(i=1;i<=10;i++){
		printf("%d * %d = %d\n",i,sayi,sayi*i);
		
	}
	
	
	
	
	
	
	
	
	
	
	return 0;
}
