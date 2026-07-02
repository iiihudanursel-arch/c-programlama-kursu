#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	// iki sayýnýn carpýmýný bulup ekraba yazdýrma
	int sayi1,sayi2,carpim;
	printf("birinci sayiyi giriniz:");
	scanf("%d",&sayi1);
	printf("ikinci sayiyi giriniz:");
	scanf("%d",&sayi2);
	carpim=sayi1*sayi2;
	printf("girdiginiz sayilarin carpimi : %d",carpim);
	
	// bölünen ve bölen degeri girilip bolum ve kalan sayýyý bukup ekrana yazdýrma
	int bolunen,bolen,bolum;
	float kalan;
	printf("bolunucek sayiyi giriniz:");
	scanf("%d",&bolunen);
	printf("bolen degeri giriniz:");
	scanf("%d",&bolen);
	bolum=bolunen/bolen;
	kalan=bolunen%bolen;
	printf("bolme isleminizden bolum degeriniz:%d\n",bolum);
	printf("bolme isleminizden kalan degeriniz:%f",kalan);
	
	//dikdortgenin alanýný ve cevresini hesaplama
	int alan,cevre,kucuk,buyuk;
	printf("dikdrtgenin uzun kenarinin degerini giriniz:");
	scanf("%d",&buyuk);
	printf("dikdortgenin kucuk kenarinin degerini giriniz:");
	scanf("%d",&kucuk);
	alan=buyuk*kucuk;
	cevre=2*buyuk+2*kucuk;
	printf("dikdortgeninizin alani:%d\n",alan);
	printf("dikdortgeninizin cevresi:%d",cevre);
	
	
	//fahrenayytan santigrata cevirme ;
	float santigrat,fahrenheit;
	printf("havanin fahrenheit cinsinden degerini giriniz:");
	scanf("%f",&fahrenheit);
	santigrat=(fahrenheit-32.0)*5.0/9.0;
	printf("havanin santigrat cinsinden degeri:%f",santigrat);
	
	
	//dikdortgen prizmasýnda taban hacim hesabi
	int kk,uk,h,tabanalani,yanalalani,topalan,hacim;
	printf("sirasiyla kisa kenari, uzun kenari ve yuksekligini giriniz:\n ");
	scanf("%d %d %d",&kk,&uk,&h);
	tabanalani=kk*uk;
	yanalalani=2*kk*h+2*uk*h;
	topalan=2*kk*h+2*uk*h+2*kk*uk;
	hacim=kk*uk*h;
	printf("dikdortgen prizmanizin taban alani :%d\n",tabanalani);
	printf("dikdortgen prizmanizin yanal alani :%d\n",yanalalani);
	printf("dikdortgen prizmanizin toplam alani :%d\n",topalan);
	printf("dikdortgen prizmanizin hacmi :%d\n",hacim);
	

	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
