// RandomWords.cpp : Credit goes to https://www.youtube.com/channel/UCdbHDXYdsHkqpyAt9Z4_iCw
//DutchTechChannel showed this beautiful algorithm and it is what this is based off of.

#include "pch.h"

#include <iostream>
#include <string>
#include <ctime>

using namespace std;

//Extra spacing at the end for random spaces
static const char alphanum[] =
"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
"abcdefghijklmnopqrstuvwxyz    ";

int stringLength = sizeof(alphanum) - 1;

char randomGen()
{
	return alphanum[rand() % stringLength];
}

int main()
{
	srand(time(0));
	string str;

	int length = 0; 

	cout << "How many characters would you like to print!\n" << endl;
	cin >> length;

	for (unsigned int i = 0; i < length; i++)
	{
		str += randomGen();
	}

	cout << str;
	cout << endl;

	system("pause");
	return 0;
}
