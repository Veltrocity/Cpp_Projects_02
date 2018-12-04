// StructPractice.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <std_lib_facilities.h>

struct acc_v1
{
	double bal;
	double intRate;
	int term;
};


int main(){

	acc_v1 account;
	getdata(account);
	double rateFrac, interest;
	rateFrac = account.intRate / 100.0;
	interest = account.bal



	keep_window_open();
	return 0;
}
void getdata(acc_v1& theAcc){

	cout << "Enter Acc Balance: ";
	cin >> theAcc.bal;
}