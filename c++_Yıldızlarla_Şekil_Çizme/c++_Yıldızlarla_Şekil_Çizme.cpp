// c++_Yıldızlarla_Şekil_Çizme.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
using namespace std;

int main()
{
	int height;

	cout << "Enter a height:";
	cin >> height;

     // YILDIZLARLA KARE
    /*
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < height; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	*/

	// YILDIZLARLA DİK ÜÇGEN
	/*
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << "*";
		}

		cout << endl;
	}
	*/

	// YILDIZLARLA TERS DİK ÜÇGEN

	/*
	for (int i = 0; i < height; i++)
	{
		for (int j = height; j > i; j--)
		{
			cout << "*";
		}
		cout << endl;
	}
	*/

	// YILDIZLARLA SAĞA YATIK DİK ÜÇGEN

	/*
	for (int i = 0; i < height; i++)
	{
		for (int j = height - 1; j > i; j--)
		{
			cout << " ";
		}

		for (int k = 0; k < i; k++)
		{
			cout << "*";
		}

		cout << endl;
	}
	*/

	// YILDIZLARLA EŞKENAR ÜÇGEN 
	/*
	int sayac = 0;
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < height - i; j++)
		{
			cout << " ";
		}

		for (int k = 0; k <= i + sayac; k++)
		{
			cout << "*";
		}

		cout << endl;
		sayac++;



	}
	*/

	// İÇİ ÇİZGİ OLAN ÜÇGEN

	int sayac = 0;
	for (int i = 1; i <= height; i++)
	{
		for (int j = 1; j <= height - i; j++)
		{
			cout << " ";
		}

		for (int k = 1; k <= i + sayac; k++)
		{
			if (k == 1 || k == i + sayac || i == height)
			{
				cout << "*";
			}
			else if (i % 2 == 0)
			{
				cout << "/";
			}
			else
			{
				cout << "\\";
			}
		}

		cout << endl;
		sayac++;



	}






}

