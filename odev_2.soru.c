#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	

	int num1,num2,i=1;//de�i�kenlerimizi tan�ml�yoruz
	
	printf("Birinci sayiyiyi giriniz (Negatif olmasin): ");//kullan�c�dan num1 ve num2 say�lar�n� al�yoruz
	scanf("%d",&num1);
	printf("Ikinci sayiyiyi giriniz (Negatif olmasin) : ");
	scanf("%d",&num2);
	if(num1<=0 || num2<=0){//kullan�c�dan al�nan say�lar�n pozitif olup olmad���n� kontrol ediyoruz
    printf("*********Sayilari yanlis girdiniz*********\n");
	printf("Birinci sayiyiyi giriniz (Negatif olmasin): ");//kullan�c�dan al�nan say�lar pozitif de�il ise yeni say�lar al�yoruz
	scanf("%d",&num1);
	printf("Ikinci sayiyiyi giriniz (Negatif olmasin) : ");
	scanf("%d",&num2);
	}
		
		while(num1>0 && num2>0 ){//while d�ng�m�z� yaz�yoruz ve i�ine say�lar�m�z�n 0'a e�itlenmedi�i s�rece d�ng�m�z�n devam ettirmek istedi�imizi belirtiyoruz.
		if(num1>=num2){//say�lardan b�y�k ve k���k olan� belirleyip b�y�k olandan k���k olan� ��kar�yoruz.
		printf("num1 = %d\n",num1);
		printf("num2 = %d\n",num2);
		num1-= num2;
		printf("num1-num2= %d (yeni num1)\n",num1);
		};
		if(num2>=num1){//say�lardan b�y�k ve k���k olan� belirleyip b�y�k olandan k���k olan� ��kar�yoruz.
		printf("num2 = %d\n",num2);
		printf("num1 = %d\n",num1);
		num2-= num1;
		printf("num2-num1= %d (yeni num2)\n",num2);
		};
		i++;//d�ng�m�z ka� defa d�nd���n� hesaplamak i�inde her seferinde 1 artan i de�i�kenimizi yaz�yoruz.
		};
		
		printf("\n\nnum1 = 0 veya num2 = 0 yapmak icin gereken islem sayisi = %d",i);//istedi�imiz sonucu yazd�r�yoruz.
	 
		
	
	
	
	return 0;
}
