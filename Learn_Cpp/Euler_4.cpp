#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
bool isPal(string s);

int Euler_4() {//Find largest Palindrome Product of 3 digit numbers
	int a;
	int b;
	int prod = 0; int large = 0;
	string s;
	for (a = 999; a > 900; a--) {
		for (b = 999; b > 900; b--) {
			prod = a*b;
			s = to_string(prod);
			if (isPal(s)) {
				if (prod > large) {
					large = prod;
				}
			}
		}
	}
	return large;
}

bool isPal(string s) {
	for (int i = 0; i < s.length() - i; i++) {
		if (s.at(i) != s.at(s.length() - i-1)) {
			return false;
		}
	}
	return true;
}