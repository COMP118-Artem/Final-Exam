// Final Exam.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Author:Samusev Artem 
#include <iostream>
using namespace std;
int main()
{
	bool notOver = true;
	int comm = 0;
	int num1 = 0;
	int num2 = 0;
	int summ = 0;
	int arr[15];

	cout << "Enter array: ";

	for (int i = 0; i < 15; i++)
	{
		cin >> arr[i];
	}
	while (notOver)
	{
		cout << "\n1) Enter data in array\n2) Show array\n3) Sum of all elements of the array\n4) Make all elements of array zero\n5) Exit\nPlease enter choice:";
		cin >> comm;
		switch (comm)
		{
		case 1:
			cout << "Enter position: ";
			cin >> num1;
			cout << "Enter value: ";
			cin >> num2;
			arr[num1 - 1] = num2;
			break;
		case 2:
			for (int i = 0; i < 15; i++)
			{
				cout << arr[i] << " ";
			}
			cout << endl;
			break;
		case 3:
			summ = 0;
			for (int i = 0; i < 15; i++)
			{
				summ += arr[i];
			}
			cout << summ << endl;
			break;

	}
}