// zadacha5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main() {
	int N;
	cout << "Enter number between 1000 and 1 000 000: ";
	cin >> N;
	while (N < 1000 || N>1000000) {
		cout << "Number isn't between 1000 and 1 000 000, try again: ";
		cin >> N;
	}

	system("PAUSE");
    return 0;
}

