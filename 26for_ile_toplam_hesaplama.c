#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//1 den kullanýcýnýn girdigi degere kadar olan sayýlarýn toplamý
	int i;
	int s;
	int toplam=0;
	printf("deger giriniz:");
	scanf("%d",&s);
	for(i=1;i<=s;i++){
		if(i==s){
			printf("%d",i);
		}
		else{
			printf("%d+",i);
		}
		
		
		
	toplam=toplam+i;	
		
	}
	printf("=%d",toplam);
	
	
	
	
	
	
	
	return 0;
}
