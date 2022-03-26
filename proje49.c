#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int sayi;
	int toplam=0;
	
	while(sayi!=0)
	{
		printf("Sayi: ");
		scanf("%d",&sayi);
		toplam=toplam+sayi;
	}
	printf("%d",toplam);	
	
	
	
	// Klavyeden 4 tam sayi alip toplami
	
	//int sayi,i,toplam=0;
	
	//for(i=1;i<=4;i++)
	//{
		//printf("Sayi Giriniz: ",i);
		//scanf("%d",&sayi);
		//toplam=toplam+sayi;
	//}
	//printf("Toplam Sonuc: %d",toplam);
	//printf("\n");
	
	
	
	// Bakteri Sayisi
	
	//int sayi=1;
	//int i;
	//for(i=1;i<=24;i++)
	//{
		//sayi=sayi*2;
	//}
	//printf("%d",sayi);

	return 0;
}
