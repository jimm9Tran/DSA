#include <iostream>
#include <math.h>
#include <iomanip>
#include <fstream>

#define EPSILON 0.0001f

	using namespace std;

int binaryToDecimal(long long n){
	int decimal = 0;
	int power = 1;
	int i;
	while (n){
		i = n%10;
		decimal += i*power;
		power *=2;
		n = n/10;
	}
	return decimal;
}

long long decimalToBinary(long long n){
	long long binary = 0;
	long long i = 1;
	while (n){
		binary += (n%2)*i;
		i = i*10;
		n = n/2;
	}
	return binary;
}

int main(int argc, char const *argv[])
{
	int n; cin >> n;

	cout << setprecision(3) << fixed << sqrt(n);

	return 0;
}