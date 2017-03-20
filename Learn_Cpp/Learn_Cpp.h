#include <math.h>
#include <string>
#include <vector>

bool isPrime(int a);

int Euler_1();//find sum of all multiples of 3 or 5 below 1000

int Euler_2(int a, int b);//find sum of even valued terms less than 4,000,000

int Euler_3(long long a);//find largest prime factor of a
	bool isBigPrime(long long a);//checks if number is prime

int Euler_4();//Find largest Palindrome Product of 3 digit numbers
	bool isPal(std::string s);//checks if a string is a boolean

struct PrimeCount
{
	int prime;
	int count;
};
typedef struct PrimeCount p_count;

int Euler_5();//smallest # divisible by 1-20
	void break_down(std::vector<p_count>* arr, int a);

int Euler_6();//Sum Square Difference

int Euler_7(int n);

long long Euler_8();//largest product sequence in a series

int Euler_9();//Special Pythagorean Product

long long Euler_10(int n);