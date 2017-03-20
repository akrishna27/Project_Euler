// Learn_Cpp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Learn_Cpp.h"
using namespace std;


int main()
{
	//cout << "Euler 1: " << Euler_1() << endl;
	//cout << "Euler 2: " << Euler_2(1,2) << endl;
	//cout << "Euler 3: " << Euler_3(600851475143) << endl;
	//cout << "Euler 4: " << Euler_4() << endl;
	//cout << "Euler 5: " << Euler_5() << endl;
	//cout << "Euler 6: " << Euler_6() << endl;
	//cout << "Euler 7: " << Euler_7(10001) << endl;
	//cout << "Euler 8: " << Euler_8() << endl;
	//cout << "Euler 9: " << Euler_9() << endl;
	cout << "Euler 10: " << Euler_10(2000000) << endl;
	
    return 0;
}

int Euler_1() {//find sum of all multiples of 3 or 5 below 1000
	int i; int sum = 0;
	for (i = 3; i < 1000; i = i + 2) {
		if (i % 5 == 0) {
			continue;
		}
		sum += i;
	}
	i = 0;
	for (i = 5; i < 1000; i = i + 5) {
		sum += i;
	}
	return sum;
}

int Euler_2(int a, int b) {//find sum of even valued terms less than 4,000,000
	int sum = 0; int temp;
	while (b < 4000000) {
		if (b % 2 == 0) {
			sum += b;
		}
		temp = b;
		b = a + b;
		a = temp;
	}
	return sum;
}