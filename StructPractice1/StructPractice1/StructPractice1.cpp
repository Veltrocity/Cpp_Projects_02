// StructPractice1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <std_lib_facilities.h>

const string meow;

struct cats
{
	string name;
	string color;
	int age;


};
void getCat(cats& meow);
int main(){

	cats Mrkitty;
	getCat(Mrkitty);
	string name;
	string color;
	int age;

	cout << Mrkitty.name << Mrkitty.age << Mrkitty.color;
	cout << endl;
	cout << "cats";

	keep_window_open();
	return 0;
}
void getCat(cats& meow){

	cin >> meow.name, meow.color, meow.age;



}