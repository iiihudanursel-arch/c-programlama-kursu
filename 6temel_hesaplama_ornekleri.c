#include <stdio.h>
#include <stdlib.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//Kenar Uzunluðunu Alýp Karenin Alanýný Hesaplama
	int kenar,alan;
	printf("karenin bir kenar uzunkugunu giriniz:");
	scanf("%d",&kenar);
	alan=kenar*kenar;
	printf("kenar uzunlugu %d olan karenizin alani :%d",kenar,alan);
	
	//bir arabanýn gittiði yolu mil cinsinden girdi olarak alan ve bunu km ye ceviren c programý 1mil=1.609 km
	float mil,km;
	printf("arabanizin mil cinsinden gittigi yol degerini giriniz:");
	scanf("%f",&mil);
	km=mil*1.609;
	printf("arabanizin km cinsinden gittigi yol degeri:%f",km);
	
	//Dairenin Alanýný ve Çevresini Hesaplama  alan=pi*r*r cevre=2*pi*r
	float r,alan,cevre,pi;
    pi=3.14;
	printf("dairenizin yaricap degerini giriniz:");
	scanf("%f",&r);
	alan=pi*r*r;
	cevre=2*pi*r;
	printf("dairenizin alani:%.2f\n",alan);
	printf("dairenizin cevresi:%.2f",cevre);
	
	// havuzun enini boyunu ve yukseklýgýný metre cinsinden alan ve havuzun dolmasý için ne kadar suyun gereklý oldugunu gosteren c programý
	float en,boy,yuk,metrekup;
	printf("havuzunuzun sirasiyla en boy yukseklik degerlerini giriniz:\n");
	scanf("%f%f%f",&en,&boy,&yuk);
	metrekup=en*boy*yuk;
	printf("havuzunuzun dolmasi icin gereken su miktari metrekup cinsinden %.2fdir.",metrekup);
	
	// uc sayýnýn ortalamasýný giren program
	float s1,s2,s3;
	float ort;
	printf("1.sinav notunuzu giriniz:");
	scanf("%f",&s1);
	printf("2.sinav notunuzu giriniz:");
	scanf("%f",&s2);
	printf("3.sinav notunuzu giriniz:");
	scanf("%f",&s3);
	ort=(s1+s2+s3)/3;
	printf("not ortalamaniz %.2f dir.",ort);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
