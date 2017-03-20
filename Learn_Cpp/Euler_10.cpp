#include "stdafx.h"
#include "Learn_Cpp.h"

long long Euler_10(int n) {//find sum of all primes < n
	long long sum = 2;
	for (int i = 3; i < n; i = i + 2) {
		if (isBigPrime(i)) {
			sum += i;
		}
	}
	return sum;
}