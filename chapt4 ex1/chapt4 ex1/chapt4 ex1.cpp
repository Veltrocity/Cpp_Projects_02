// chapt4 ex1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <std_lib_facilities.h>

int main()
{
	vector <double> city1;
	double max = 0; 
	double sum = 0;
	double min = 0;      
	double c1;
	int list = 2;
	double avg;
	
	
	cout << "Sequences in The Vector: " << list << endl;
	for (int i = 0; i < list; i++)
	{
		cout << "Please enter values for City 1: ";
		cin >> c1;
		city1.push_back(c1);
	
	}
	cout << endl; 
	for (int i = 0; i < city1.size(); i++)
	{
		cout << city1[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < city1.size(); i++)
	{
		sum = city1[i] + sum;

	}

	if (city1[0] > city1[1])
	{
		max = city1[0];
		min = city1[1];
		cout << city1[0] << endl;
	}

	avg = sum / city1.size();
	cout << "avg " << avg << endl;
	cout << sum << endl;







	keep_window_open();
	return 0;
}