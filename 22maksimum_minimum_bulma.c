#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/*kullanýcýdan 3 farklý tam sayý girmesini isteyen kullanýcýnýn girdigi bu sayýlarý okuyup
	sayýlarýn en kucugunu ve en buyugunu ekrana yazdýran program*/
	
	int a,b,c;
	int min,max;
	printf("en buyuk  ve en kucuk degerini bulmak istediginiz sayilari ekrana yaziniz:");
	scanf("%d %d %d",&a,&b,&c);
	max=a;
	if(max<b)
	{
		max=b;
	}
	if(max<c)
	{
		max=c;
	}
	printf("maxsimum degeriniz:%d\n",max);
	
	min=a;
	if(min>b)
	{
		min=b;
	}
	if(min>c)
	{
		min=c;
	}
	printf("minimum degeriniz : %d",min);
	
	
	
	
	
	
	
	return 0;
}
