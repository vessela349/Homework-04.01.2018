// zadacha6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main(){
	int specialNumbers[4], num = 1, numOfNumbers = 0;

	while (numOfNumbers < 4) {
		if (num % 2 == 1 && num % 3 == 2 && num % 4 == 3 && num % 5 == 4 && num % 6 == 5 && num % 7 == 6 && num % 8 == 7 && num % 9 == 8) {
			specialNumbers[numOfNumbers] = num;
			numOfNumbers++;
		}
		num++;
	}

	cout << "Result:" << endl;
	for (int i = 0; i < 4; i++) {
		cout << specialNumbers[i] << " " << endl;
	}
	cout << endl;

	system("PAUSE");
    return 0;
}

