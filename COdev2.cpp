// HW2AP13253013.cpp : Defines the entry point for the console application.
//



#include "stdafx.h"
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include <windows.h>
void KutuSayısı();
int KutuSayisi;
int N, x[80][80];
int i, j;
void DepoDolu();
int enkucuksatır;
int enkucuksutun;
int enkucuk;
void  Son_hali();
void deger_al(int N); //FONKSİYONLARIN VE GLOBAL DEĞİŞKENLER TANIMLANDI......

int main()
{
	printf("Depo Boyutunu girin(N):\n");///deponun boyutu isteniliyor....
	scanf_s("%d", &N);
	if (N > 0)
	{
		deger_al(N);//FONKSİYON ÇAĞIRILIYOR.....
		printf("Depo Boyutu (N)=%d\n", N);
		KutuSayısı(); ///KUTU SAYISINI BULAN FONKSİYON ÇAĞIRILIYOR....
		DepoDolu(); ///FONKSİYON ÇAĞIRILIYOR...
		Son_hali(); ///FONKSİYON ÇAĞIRILIYOR....
	}

	else
	{
		printf("Depo Boyutu Pozitif Bir deger  olmalidir(N)\n");
		main();
	}

	getchar();
	system("Pause");

}
void deger_al(int N) //KULLANICIDAN MATRİS ELEMANLARINI TEK TEK ALIYOR......
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			printf("<%d %d>=", i + 1, j + 1);
			scanf_s("%d", &x[i][j]);
			printf("\n");

		}

	}
	system("cls");  ///Ekrandaki değerleri siliyor.....!!!
}
void KutuSayısı() ///YERLEŞTİRİLECEK KUTU SAYISI.....
{
	printf("Istiflenecek  Kutu  Sayisi:");
	scanf_s("%d", &KutuSayisi);
	while (KutuSayisi<0) //KUTU  SAYISI SIFIRDAN KÜÇÜK OLMAMALI.....
	{
		printf("Istiflenecek Kutu Sayısı Pozitif olmalıdır:\n");
		KutuSayısı();
	}

}
void  DepoDolu()// EN KÜÇÜĞÜ BULUP ARTTIRAN FONKSİYON.....
{
	printf("Deponun Mevcut Dolugu:\n");
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			printf("%5d", x[i][j]);

		}
		printf("\n");
	}
	for (int k = KutuSayisi; k > 0; k--)
	{
		enkucuk = x[0][0];
		enkucuksatır = 0;
		enkucuksutun = 0;

		for (i = 0; i < N; i++)
		{
			for (j = 0; j < N; j++)
			{
				if (x[i][j] < enkucuk)
				{
					enkucuk = x[i][j];
					enkucuksatır = i;
					enkucuksutun = j;

				}
			}

		}
		x[enkucuksatır][enkucuksutun]++;

	}
}
void  Son_hali() ///Bu fonksiyon matrisin son halini gösteriyor.......!!!!
{
	printf("Kutularin Yerlestirilmis Hali\n");
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			printf("%5d", x[i][j]);

		}
		printf("\n");
	}
}



