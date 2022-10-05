// Chapter 18 exer 7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*Write a C++ program that displays the following menu:
Convert USD to Euro (EUR)
Convert USD to British Pound Sterling (GBP)
Convert USD to Japanese Yen (JPY)
Convert USD to Canadian Dollar (CAD)
It then prompts the user to enter a choice (of 1, 2, 3, or 4) and an
amount in US dollars and calculates and displays the required value.
Assume that the user enters valid values. It is given that
$1 = 0.87 EUR (€)
$1 = 0.78 GBP (£)
$1 = ¥ 108.55 JPY
$1 = 1.33 CAD ($)*/

#include <iostream>
#include<string.h>

using namespace std;

int main()
{
	int amount;
	float EUR, GBP, JPY, CAD;
	int choice;
	
	cout << "enter the amount:";
	cin >> amount;
	cout << "1 USD to EURO (EUR)"<<endl;
	cout << "2 USD to GBP:"<<endl;
	cout << "3 USD to JPY:"<<endl;
	cout << "4 USD to CAD:"<<endl;

	cout << "enter the user choice: ";
	cin >> choice;
	
	

	if (choice == 1) {
		EUR = amount * 0.87;
		cout << " American dollars equals: " << EUR << " Euros" << endl;
	}
	else if (choice == 2) {
		GBP = amount * 0.78;
		cout << "American dollars equals: " << GBP << "GBP" << endl;
	}
	else if (choice == 3) {
		JPY = amount * 108.55;
		cout << "American dollars equals: " << JPY << "JPY" << endl;
	}
	
	else if (choice == 4) {
		CAD = amount * 1.33;
		cout << "American dollars quals: " << CAD << "CAD" << endl;
	}
	else {
		cout << "error";
	}
	return 0;
}
