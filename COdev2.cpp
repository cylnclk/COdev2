// HW2AP13253013.cpp : Defines the entry point for the console application.
//



#include "stdafx.h"
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include <windows.h>
void KutuSay�s�();
int KutuSayisi;
int N, x[80][80];
int i, j;
void DepoDolu();
int enkucuksat�r;
int enkucuksutun;
int enkucuk;
void  Son_hali();
void deger_al(int N); //FONKS�YONLARIN VE GLOBAL DE���KENLER TANIMLANDI......

int main()
{
	printf("Depo Boyutunu girin(N):\n");///deponun boyutu isteniliyor....
	scanf_s("%d", &N);
	if (N > 0)
	{
		deger_al(N);//FONKS�YON �A�IRILIYOR.....
		printf("Depo Boyutu (N)=%d\n", N);
		KutuSay�s�(); ///KUTU SAYISINI BULAN FONKS�YON �A�IRILIYOR....
		DepoDolu(); ///FONKS�YON �A�IRILIYOR...
		Son_hali(); ///FONKS�YON �A�IRILIYOR....
	}

	else
	{
		printf("Depo Boyutu Pozitif Bir deger  olmalidir(N)\n");
		main();
	}

	getchar();
	system("Pause");

}
void deger_al(int N) //KULLANICIDAN MATR�S ELEMANLARINI TEK TEK ALIYOR......
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
	system("cls");  ///Ekrandaki de�erleri siliyor.....!!!
}
void KutuSay�s�() ///YERLE�T�R�LECEK KUTU SAYISI.....
{
	printf("Istiflenecek  Kutu  Sayisi:");
	scanf_s("%d", &KutuSayisi);
	while (KutuSayisi<0) //KUTU  SAYISI SIFIRDAN K���K OLMAMALI.....
	{
		printf("Istiflenecek Kutu Say�s� Pozitif olmal�d�r:\n");
		KutuSay�s�();
	}

}
void  DepoDolu()// EN K����� BULUP ARTTIRAN FONKS�YON.....
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
		enkucuksat�r = 0;
		enkucuksutun = 0;

		for (i = 0; i < N; i++)
		{
			for (j = 0; j < N; j++)
			{
				if (x[i][j] < enkucuk)
				{
					enkucuk = x[i][j];
					enkucuksat�r = i;
					enkucuksutun = j;

				}
			}

		}
		x[enkucuksat�r][enkucuksutun]++;

	}
}
void  Son_hali() ///Bu fonksiyon matrisin son halini g�steriyor.......!!!!
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



