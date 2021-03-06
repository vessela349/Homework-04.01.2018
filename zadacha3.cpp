// zadacha3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main() {
	int R, K;

	cout << "Enter number of rows for arrays (between 3 and 10): ";
	cin >> R;
	while (R < 3 || R>10) {
		cout << "Number of rows must be between 3 and 10, try again: ";
		cin >> R;
	}

	cout << "Enter number of colums for arrays (between 3 and 10): ";
	cin >> K;
	while (K < 3 || K>10) {
		cout << "Number of colums must be between 3 and 10, try again: ";
		cin >> K;
	}
	
	int arr1[10][10], arr2[10][10], arrResult[10][10];

	for (int i = 0; i < R; i++) {
		for (int j = 0; j < K; j++) {
			arr2[i][j] = 1;
		}
	}

	cout << "Enter numbers for first array, must be between 0 and 22:" << endl;
	for (int i = 0; i < R; i++) {
		for (int j = 0; j < K; j++) {
			cout << "Enter arr1[" << i << "][" << j << "]: ";
			cin >> arr1[i][j];
			while (arr1[i][j] < 0 || arr1[i][j] > 22) {
				cout << "Enter number between 0 and 22: ";
				cin >> arr1[i][j];
			}
		}
	}
	cout << endl << "Elements in first array:" << endl;
	for (int i = 0; i < R; i++) {
		for (int j = 0; j < K; j++) {
			cout << arr1[i][j] << " ";
		}
		cout << endl;
	}
	int sumArr2 = 0;
	cout << endl << "Elements in second array:" << endl;
	for (int i = 0; i < R; i++) {
		for (int j = 0; j < K; j++) {
			sumArr2 = sumArr2 + arr2[i][j];
			cout << arr2[i][j] << " ";
		}
		cout << endl;
	}
	
	for (int i = 0; i < R; i++) {
		for (int j = 0; j < K; j++) {
			arrResult[i][j] = arr1[i][j] * sumArr2;
		}
	}
	cout << endl << "Result:" << endl;
	for (int i = 0; i < R; i++) {
		for (int j = 0; j < K; j++) {
			cout << arrResult[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;

	system("PAUSE");
    return 0;
}

