// zadacha4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main() {
	int N;
	cout << "Enter number of numbers (between 5 and 105): ";
	cin >> N;

	while (N < 5 || N > 105) {
		cout << "Number is not between 5 and 105, try again: ";
		cin >> N;
	}

	cout << "Enter your numbers: " << endl;
	double fractions[105][2];
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < 2; j++) {
			cin >> fractions[i][j];
		}
	}

	cout << endl << "Results:" << endl;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < 2; j++) {
			cout << fractions[i][j];
			if (j == 0) {
				cout << " / ";
			}
		}
		int percent = fractions[i][0] / fractions[i][1] * 100;
		cout << " = " << percent << "%" << endl;
	}
	cout << endl;

	system("PAUSE");
	return 0;
}


