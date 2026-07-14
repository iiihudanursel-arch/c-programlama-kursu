#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	// kullanýcýdan 1 sayý gýrmesini isteyiniz 1 den girecegýnýz sayýya kadar olan sasayýlarýn toplamýný 
	//for dongusuyle hesaolayýn
	
	
	int i;
	int sayim;
	int toplam=0;
	printf("sayi giriniz:");
	scanf("%d",&sayim);
	for(i=1;i<=sayim;i++)
	{
		toplam=i+toplam;
		
	}
	printf("toplam degeriniz %d",toplam);

	
	
	
	
	
	
	
	return 0;
}
