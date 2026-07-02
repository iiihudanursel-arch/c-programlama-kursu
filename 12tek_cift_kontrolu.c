#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//kullanýcýdan sayý alarak tek mi çift mi oldugunu bulan program
	int sayi;
	printf("tek mi cift mi oldugunu ogrenmek istediginiz sayinizi giriniz:");
	scanf("%d",&sayi);
	if(sayi%2==0)
	{
		printf("sayiniz %d cift bir sayidir.",sayi);
	}
	else
	{
		printf("sayiniz %d tek bir sayidir.",sayi);
	}
	
	
	
	
	return 0;
}
