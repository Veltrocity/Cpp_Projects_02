// chapt3 ex3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <std_lib_facilities.h>

int main()
{
	int v1 = 0;
	cin >> v1;
	string res = "even";
	if (v1 % 2)
	{
		res = "odd";
	}

	cout << res;

	keep_window_open();
	return 0;
}