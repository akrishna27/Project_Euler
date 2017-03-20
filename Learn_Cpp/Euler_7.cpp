#include "stdafx.h"
#include "Learn_Cpp.h"

int Euler_7(int n) {//find the nth prime number
	int num = 0; //prime number
	int j = 0;//jth prime number found
	for (int i = 2; j < n; i++) {
		if (isPrime(i)) {
			num = i;
			j++;
		}
	}
	return num;
}


