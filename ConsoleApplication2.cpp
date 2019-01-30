// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Christopher James
#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int num;
	double weight;
	string name;

	cout << "Enter an int: ";
	cin >> num;
	cout << endl;

	cout << "num: " << num << endl;

	cout << "Enter Name: ";
	cin >> name;
	cout << endl;

	cout << "Enter Weight: ";
	cin >> weight;
	cout << endl;

	cout << "Name: " << name << endl;
	cout << "Weight: " << weight << endl;

	return 0;
}
