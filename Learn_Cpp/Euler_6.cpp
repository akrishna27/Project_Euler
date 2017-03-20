#include "stdafx.h"
#include <iostream>
#include <math.h>


int Euler_6() {//Sum Square Difference
	int s1 = 0;;//square of the sums
	int s2 = 0;//sum of squares
	for (int i = 1; i <= 100; i++) {
		s1 += i;
	}
	s1 = pow(s1, 2);
	for (int i = 1; i <= 100; i++) {
		s2 += pow(i, 2);
	}
	return (s1 - s2);
}