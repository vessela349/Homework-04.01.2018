// zadacha2.cpp : Defines the entry point for the console application.
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

	int totalSum = 0;
	for (int i = 0; i < 6; i++) {
		int sumRow = 0;
		for (int j = 0; j < 6; j++) {
			if (square[i][j]%2==0) {
				sumRow = sumRow + square[i][j];
				cout << square[i][j] << ", ";
			}
			else {
				cout << ",";
			}
		}
		totalSum = totalSum + sumRow;
		cout << " Sum of elements: " << sumRow << endl;
	}
	
	cout << endl << "The total sum is: " << totalSum << endl << endl;

	system("PAUSE");
    return 0;
}

