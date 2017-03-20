#include "stdafx.h"
#include <iostream>
#include <vector>
#include <math.h>

using namespace std;
/*
make a struct that holds prime number and count value
make an array of all such structs for primes 2-19
break down every number from 11-20 into primes
	increment each count variable for that prime of that number
	compare with count of prime in vector
		if new count is greater, make this the new count
		add number to a vector of numbers we will multiply
multiply through
*/

struct PrimeCount
{
	int prime;
	int count;
};
typedef struct PrimeCount p_count;


bool isPrime(int a);
void break_down(std::vector<p_count>* arr, int a);

int Euler_5() {//smallest # divisible by 1-20
	std::vector<p_count> arr(8);//array of all the prime numbers
	std::vector<p_count>* ptr = &arr;
	int j = 0;
	for (int i = 2; i <= 19; i++) {//setup master prime vector
		if (isPrime(i)) {
			arr[j].prime = i;
			/*if (i < 10) {
				arr[j].count++;
			}
			*/
			j++;
		}
	}
	//break down numbers 20->11
	for (int i = 20; i > 10; i--) {
		break_down(ptr, i);
	}
	
	long prod = 1;
	for (int i = 0; i < arr.size(); i++) {
		prod = prod * pow(arr[i].prime, arr[i].count);
	}
	return prod;
}

bool isPrime(int a) {//checks if number is prime
	for (int i = 2; i < a; i++) {
		if (a%i == 0) {
			return false;
		}
	}
	return true;
}

void break_down(std::vector<p_count>* arr, int a) {
	//breaks down a number to primes, if it contains a number not yet represented then adds that number to numbers needed to be multiplied
	int b; int count=0; 
	for (int i = 0; i < arr->size(); i++) {
		b = a;
		while (b % (*arr)[i].prime == 0) {
			count++;
			b = b / (*arr)[i].prime;
		}
		if (count > (*arr)[i].count) {
			(*arr)[i].count = count;
		}
		count = 0;
	}
}