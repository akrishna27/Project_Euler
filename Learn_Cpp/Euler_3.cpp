#include <iostream>
#include "stdafx.h"
#include <math.h>
using namespace std;
bool isBigPrime(long long a);

int Euler_3(long long a) {//find largest prime factor of a
	int num = 1;//largest prime factor
	if (a % 2 == 0) {
		num = 2;
	}
	for (long i = 3; i < sqrt(a); i = i+2) {
		if (a%i == 0) {
			if (isBigPrime(i)) {
				num = i;
			}
		}
	}
	return num;
}

bool isBigPrime(long long a) {//checks if number is prime
	for (int i = 2; i <= round(sqrt(a)); i++) {
		if (a%i == 0) {
			return false;
		}
	}
	return true;
}