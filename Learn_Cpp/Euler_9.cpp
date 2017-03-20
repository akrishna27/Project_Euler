#include "stdafx.h"
#include <math.h>

/*
create a while loop for a that runs from 3
	create while loop for b that runs from 4
		var c = sqrt(pow(a,2) + pow(b,2))
			check if c is natural
			if natural, find the sum
				if sum = 1000, find product and return product
				if sum > 1000, break
			increment b
	increment a
*/

int Euler_9() {
	int a = 3; double c = 0;
	int sum;
	while (a) {
		for (int b = 4; b < 1000; b++) {
			c = sqrt(pow(a, 2) + pow(b, 2));
			if (floor(c) == c ){//if number is whole
				sum = a + b + c;
				if (sum == 1000) {
					return (a*b*c);
				}
				else if (sum > 1000) {
					break;
				}
			}
		}
		a++;
	}
	
}