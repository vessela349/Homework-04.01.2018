﻿// zadacha1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main() {
	int square[6][6];
	int number = 10;
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			square[i][j] = number;
			number = number + 1;
		}
	}
	cout << "Array numbers:" << endl;
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			cout << square[i][j] << " ";
		}
		cout << endl;
	}

	cout << endl;

	int sumrow2 = 0, sumrow4 = 0, sumrow6 = 0;

	cout << "Row 2: ";
	for (int j = 0; j < 6; j++) {
			cout << square[1][j] << " ";
			sumrow2 = sumrow2 + square[1][j];
		}
	cout << "=> sum: " << sumrow2 << endl;

	cout << "Row 4: ";
	for (int j = 0; j < 6; j++) {
		cout << square[3][j] << " ";
		sumrow4 = sumrow4 + square[3][j];
	}
	cout << "=> sum: " << sumrow4 << endl;

	cout << "Row 6: ";
	for (int j = 0; j < 6; j++) {
		cout << square[5][j] << " ";
		sumrow6 = sumrow6 + square[5][j];
	}
	cout << "=> sum: " << sumrow6 << endl;

	cout << "Sum of rows 2, 4 and 6: " << sumrow2 + sumrow4 + sumrow6 << endl;

	system("PAUSE");
	return 0;
}
