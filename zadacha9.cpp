// zadacha9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

bool divisor(int N) {
	int sum = 0, copy = N;
	while (N > 0) {
		sum = sum + N % 10;
		N = N / 10;
	}
	if (copy % sum == 0) {
		return true;
	}
	else {
		return false;
	}
}

int main() {
	int N;
	cout << "Enter natural number between 111 and 22222 to check if its' digits sum is a divisor: ";
	cin >> N;
	while (N < 111 || N>22222) {
		cout << "Number isn't between 111 and 22222, try again: ";
		cin >> N;
	}
	cout << boolalpha << divisor(N) << endl;

	system("PAUSE");
    return 0;
}