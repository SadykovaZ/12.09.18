// 12.09.18.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include<iostream>
#include<string> // библиотека для работы со строка
using namespace std;

void main()
{
	
#pragma region MyRegion


	
		////Теория
		//string s; // можно использрвать дла char только в этом случае видит как целый обьект а не как массив
		//string s1;

		//getline(cin, s, '.');

		//s = "This is string";
		//s1 = "is";
		//s = s + " " + s1; // работает как strcat 
		//cout << (s > s1) << endl; // работает как strcmp сравнивает
		//cout << strstr(s.c_str(), s1.c_str()) << endl; // нужно чтобы перевести с char массив
		//cout << s.length() << endl; //размер строки
#pragma endregion

	

#pragma region MyRegion




		//1. Напечатать самое длинное и самое короткое слово в этой строке.
		/*char str[100];
		char max_str[30];
		char min_str[30];
		cin.getline(str, 100);

		char* p, *context;

		p = strtok_s(str, " ", &context);
		strcpy_s(min_str, p);
		strcpy_s(max_str, p);

		while (p != NULL)
		{
			if ((strlen(p)) > strlen(max_str))
			{
				strcpy_s(max_str, p);
			}
			if ((strlen(p)) < strlen(max_str))
			{
				strcpy_s(min_str, p);
			}

			p = strtok_s(NULL, " ", &context);
		}
		cout << "Max = " << max_str << " " << "Min = " << min_str << endl;*/
#pragma endregion

#pragma region MyRegion


		//Напечатать все слова, которые не содержат гласных букв
	char str1[100];


	cin.getline(str1, 100);

	char*p1, *context1;

	p1 = strtok_s(str1, " ", &context1);
	int z = 0;

	for (int i = 0; i < strlen(p1); i++)
	{
		if (p1[i] == 'a' || p1[i] == 'e' || p1[i] == 'i' || p1[i] == 'o' || p1[i] == 'u') {
			z = 1;
			break;
		}
	}

	if (z == 0) cout << p1 << endl;



	while (p1 != NULL)
	{
		z = 0;
		p1 = strtok_s(NULL, " ", &context1);
		for (int i = 0; i < strlen(p1); i++)
		{

			if (p1[i] == 'a' || p1[i] == 'e' || p1[i] == 'i' || p1[i] == 'o' || p1[i] == 'u') {
				z = 1;
				break;
			}
		}


		if (z == 0) cout << p1 << endl;
	}


#pragma endregion

	system("pause");
}
