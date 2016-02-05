#include "std_lib_facilities.h"

// Simple program to exercise operators

int main()
{
	cout << "Please enter an integer value: ";
	int n;
	cin >> n;
	double n_double = n;
	cout 	<< "n == " << n << '\n'
		<< "n+1 == " << n+1 << '\n'
		<< "3n == " << 3*n << '\n'
		<< "n+n == " << n+n << '\n'
		<< "n^2 == " << n*n << '\n'
		<< "n/2 == " << n/2 << '\n'
		<< "square root of n == " << sqrt(n_double) << '\n'
		<< "remainder of 12345/n == " << 12345%n << '\n';
}
