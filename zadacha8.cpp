// zadacha8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int fibonacci(int number) {
	int nextNum, first = 0, second = 1, c;
	for (c = 1; c <= number; c++) {
		if (c <= 1)
			nextNum = c;
		else
		{
			nextNum = first + second;
			first = second;
			second = nextNum;
		}
		cout << nextNum << endl;
	}
	return nextNum;
}

int main() {
	int number;
	cout << "Enter number: ";
	cin >> number;
	while (number<1 || number>40) {
		cout << "Number isn't between 1 and 40, try again: ";
		cin >> number;
	}
	cout << "Corresponding Fibonacci number: " << fibonacci(number) << endl;

	system("PAUSE");
	return 0;
}
