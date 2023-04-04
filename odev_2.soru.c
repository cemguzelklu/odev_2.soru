#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	

	int num1,num2,i=1;//deðiþkenlerimizi tanýmlýyoruz
	
	printf("Birinci sayiyiyi giriniz (Negatif olmasin): ");//kullanýcýdan num1 ve num2 sayýlarýný alýyoruz
	scanf("%d",&num1);
	printf("Ikinci sayiyiyi giriniz (Negatif olmasin) : ");
	scanf("%d",&num2);
	if(num1<=0 || num2<=0){//kullanýcýdan alýnan sayýlarýn pozitif olup olmadýðýný kontrol ediyoruz
    printf("*********Sayilari yanlis girdiniz*********\n");
	printf("Birinci sayiyiyi giriniz (Negatif olmasin): ");//kullanýcýdan alýnan sayýlar pozitif deðil ise yeni sayýlar alýyoruz
	scanf("%d",&num1);
	printf("Ikinci sayiyiyi giriniz (Negatif olmasin) : ");
	scanf("%d",&num2);
	}
		
		while(num1>0 && num2>0 ){//while döngümüzü yazýyoruz ve içine sayýlarýmýzýn 0'a eþitlenmediði sürece döngümüzün devam ettirmek istediðimizi belirtiyoruz.
		if(num1>=num2){//sayýlardan büyük ve küçük olaný belirleyip büyük olandan küçük olaný çýkarýyoruz.
		printf("num1 = %d\n",num1);
		printf("num2 = %d\n",num2);
		num1-= num2;
		printf("num1-num2= %d (yeni num1)\n",num1);
		};
		if(num2>=num1){//sayýlardan büyük ve küçük olaný belirleyip büyük olandan küçük olaný çýkarýyoruz.
		printf("num2 = %d\n",num2);
		printf("num1 = %d\n",num1);
		num2-= num1;
		printf("num2-num1= %d (yeni num2)\n",num2);
		};
		i++;//döngümüz kaç defa döndüðünü hesaplamak içinde her seferinde 1 artan i deðiþkenimizi yazýyoruz.
		};
		
		printf("\n\nnum1 = 0 veya num2 = 0 yapmak icin gereken islem sayisi = %d",i);//istediðimiz sonucu yazdýrýyoruz.
	 
		
	
	
	
	return 0;
}
