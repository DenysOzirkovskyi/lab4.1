// лаб4.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//Lab_2.1.cpp
//Озірковського Дениса Леонідовича
//Лабораторна робота №4.1
//Цикли//
//Варіант 11
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int k, N, i;
	double S;
	cout << "k = "; cin >> k;
	cout << "N = "; cin >> N;
	S = 0;
	i = k;
	while (i <= N)
	{
		S += (1+sqrt(1+k*k)/(k*k));
		i++;
	}
	cout <<"S1= " << S << endl;
	S = 0;
	i = k;
	do
	{
		S += (1 + sqrt(1 + k * k) / (k * k));
		i++;

	} while (i <= N);
		cout << "S2= " << S << endl;
		S = 0;
		for (i = k;i <= N;i++)
		{
			S += (1 + sqrt(1 + k * k) / (k * k));
		}
		cout << "S3= " << S << endl;
		
		S = 0;
		
		for (i = N; i >= k; i--)
		{
			S += (1 + sqrt(1 + k * k) / (k * k));
		}
		cout << "S4= " << S << endl;
		return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
