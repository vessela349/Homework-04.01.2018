// zadacha7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

bool sameNumbers(int num) {
	if (num % 10 == (num / 10) % 10) {
		return sameNumbers(num / 10);
	}
	if (num / 10 == 0) {
			return true;
	}
	return false;
}

int main() {
	int num = 1;
	while (sameNumbers(num * 18) == false) {
		num++;
	}
	cout << "The smallest natural number that when multiplied by 18 gives a number with equal digits is: " << num << endl;

	system("PAUSE");
    return 0;
}

