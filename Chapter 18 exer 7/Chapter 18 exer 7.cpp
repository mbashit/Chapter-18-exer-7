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
#include <ctime>
using namespace std;

int main()
{
	int dollars;
	float EUR, GBP, JPY, CAD;
	string choice;

	cout << "enter the user choice: ";
	cin >> choice;
	cout << "enter amount in American Dollars";
	cin >> dollars;
	cout << "convert USD to EURO (EUR)";
	cin >> EUR;
	cout << "convert USD to GBP:";
	cin >> GBP;
	cout << "convert USD to JPY:";
	cin >> JPY;
	cout << "convert USD to CAD:";
	cin >> CAD;

	if (choice == "EUR") {
		choice = dollars * 0.87;
		cout << " American dollars equals: " << choice << " Euros" << endl;
	}
	else if (choice == "GBP") {
		choice = dollars * 0.78;
		cout << "American dollars equals: " << choice << "GBP" << endl;
	}
	else if (choice == "JPY") {
		choice = dollars * 108.55;
		cout << "American dollars equals: " << choice << "JPY" << endl;
	}
	
	else  {
		choice = dollars * 1.33;
		cout << "American dollars quals: " << choice << "CAD" << endl;
	}
	return 0;
}
