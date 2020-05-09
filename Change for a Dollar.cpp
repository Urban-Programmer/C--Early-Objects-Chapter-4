// Change for a Dollar.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
    //Setting Money Amount Variables
	double penny = .01;
	double nickel = .05;
	double	dime = .10;
	double quarter = .25;

	//Setting Number of (Pennies, nickles, dimes, Quarters)
	double numberOfcoins;

	//Setting Total
	double total = 0.0;

	//Print Instructions
	cout << "Enter the number coins to add up to a dollar" << endl;


	//Print Statements
	cout << " Please enter the number of pennies: ";
	cin >> numberOfcoins;
	total += penny * numberOfcoins;
	numberOfcoins = 0;
	cout << endl;

	cout << " Please enter the number of nickels: ";
	cin >> numberOfcoins;
	total += nickel * numberOfcoins;
	numberOfcoins = 0;
	cout << endl;

	cout << " Please enter the number of dimes: ";
	cin >> numberOfcoins;
	total += dime * numberOfcoins;
	numberOfcoins = 0;
	cout << endl;

	cout << " Please enter the number of quarters: ";
	cin >> numberOfcoins;
	total += quarter * numberOfcoins;
	numberOfcoins = 0;
	cout << endl;

	//If statement
	if (total == 1.00)
	{
		cout << "Congrats it equals a dollar. You Won" << total;
	}
	else
		cout << total << " doesn't eqaul a dollar. You lost.";

}
