// Simple cal 1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <std_lib_facilities.h>


int main()
{
	int Rv;
	int Lv;
	char op;
	int res;

	cin >> Rv >> op >> Lv;
	if (op == '+')
		res = Lv + Rv;
	else if (op == '-')
		res = Lv - Rv;
	else if (op == '*')
		res = Lv * Rv; 
	else if (op == '/')
		res = Lv / Rv;
	
	cout << "The result is: " << res << endl;
	keep_window_open();
	return 0;
}