// chapt3 ex2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <std_lib_facilities.h>


int main()
{
	int v1, v2, v3;
	cin >> v1 >> v2 >> v3;

	int small = 0;
	int mid = 0;
	int large = 0;
	if (v1 >= v2 && v1 >= v3)
	{
		large = v1;
		if (v2 >= v3)
		{
			mid = v2;
			small = v3;
		}
		else
		{
			mid = v3;
			small = v2;
		}
	}
	else if (v2 >= v1 && v2 >= v3)
	{
		large = v2;
		if (v1 >= v3)
		{
			mid = v1;
			small = v3;
		}
		else
		{
			mid = v3;
			small = v1;

		}

	}
	else 
	{
		if (v3 >= v2 && v2 >= v1)
		{
			large = v3;
		}
		if (v2 >= v1)
		{
			mid = v2;
			small = v1;
		}
		else
		{
			small = v1;
			mid = v2;
		}
	
	}
	cout << small << " " << mid << " " << large << endl;


	 






	keep_window_open();
	return 0;
}

