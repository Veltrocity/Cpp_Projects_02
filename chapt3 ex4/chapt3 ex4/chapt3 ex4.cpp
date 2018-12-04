// chapt3 ex4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <std_lib_facilities.h>

int main()
{
	vector <double> acc_bal;
	double depos;
	double total = 0;
	double chk_num;

	cout << "how many checks do you want to deposit?" << endl;
	cin >> chk_num;

	for (int i = 0; i < chk_num; i++)
	{
		
		cout << i + 1 << " ";
			
		cin >> depos;
		acc_bal.push_back(depos);


	}


	for (int i = 0; i < acc_bal.size() ; i++)
	{
		total = acc_bal[i] + total;

		
	}
	cout << total << endl;
	cout << endl;

	keep_window_open();
	return 0;
}

