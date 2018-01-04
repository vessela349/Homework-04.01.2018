// zadacha10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <math.h>
#include <iostream>
using namespace std;


int main() {
	int N, K;
	cout << "Enter number of guests (between 40 and 10040): ";
	cin >> N;
	while (N < 40 || N>10040) {
		cout << "Number isn't between 40 and 10040, try again: ";
		cin >> N;
	}
	cout << "Enter maximum capacity of conference rooms (between 10 and 20): ";
	cin >> K;
	while (K < 10 || K>20) {
		cout << "Number isn't between 10 and 20, try again: ";
		cin >> K;
	}

	double arr[1004];

	double rooms;
	rooms = N / double(K);

	int rooms1;
	rooms1=ceil(rooms);

	double ppl;
	ppl = double(N) / rooms1;

	int ppl1;
	ppl1 = ceil(ppl);

	arr[0] = ppl1;

	int sum=arr[0];
	
	for (int i = 1; i < rooms1-1; i++) {
		arr[i] = floor(ppl);
		sum = sum + arr[i];
	}
	arr[rooms1 - 1] = N - sum;
	for (int i = 0; i < rooms1; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	system("PAUSE");
    return 0;
}

