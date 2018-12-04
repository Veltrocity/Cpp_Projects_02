// chapt 4 ex1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <std_lib_facilities.h>
#include <vector>

int main()
{

	//using namespace std;
	//vector<int> v = { 1, 3, 4 };
	//v.insert(next(begin(v)), 2);
	//v.push_back(5);
	
	//for (int i = 0; i < v.size(); i++)
	//{
	//	cout << v[i] << endl;
	//} v now contains {1, 2, 3, 4, 5}
	using namespace std;
	vector <double> d;
	double num;

	for (int i = 0; i < 3; i++)
	{	 
		cin >> num >> " ";
		d.push_back(num);
	};


	for (int i = 0; i < d.size(); i++)
	{
		cout << d[i] << " ";
	
	}



	cout << endl;
	keep_window_open();
	return 0;
}



