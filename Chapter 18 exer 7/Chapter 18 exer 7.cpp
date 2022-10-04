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
using namespace std;

int main()
{
	int dollars;
	float EUR, GBP, JPY, CAD;
	string choice1, choice2, choice3, choice4;

	cout << "enter currency in American Dollars";
	cin >> dollars;

	if (choice1 == "euro") {
		choice1 = dollars * 0.87;
		cout << " American dollars equals: " << choice1 << " Euros" << endl;
	}
	else if (choice2 == "GBP") {
		choice2 = dollars * 0.78;
		cout << "American dollars equals: " << choice2 << "GBP" << endl;
	}
	if (choice3 == "JPY") {
		choice3 = dollars * 108.55;
		cout << "American dollars equals: " << choice3 << "JPY" << endl;
	}
	
	if (choice4 == "CAD") {
		choice4 = dollars * 1.33;
		cout << "American dollars quals: " << choice4 << "CAD" << endl;
	}
	return 0;
}
