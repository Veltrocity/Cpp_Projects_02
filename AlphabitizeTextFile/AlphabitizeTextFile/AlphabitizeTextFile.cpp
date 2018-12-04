// AlphabitizeTextFile.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;


int main()
{
	// String holding each name
	std::string;

	// Temp value
	string temp;

	// Empty vector holding all names from file
	vector<string> names;

	// Read names from file LineUp.txt
	ifstream in("LineUp.txt");
	if (!in.is_open())
		cout << "Unable to open file \n";

	// Loop to sort vector name values
	string word;
	while (getline(in, word))
		names.push_back(word);

	sort(names.begin(), names.end());

	// Loop to print names
	for (size_t i = 0; i < names.size(); i++)
		cout << names[i] << '/n';

	return 0;



}

