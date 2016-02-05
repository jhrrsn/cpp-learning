#include "std_lib_facilities.h"

int main()
{
	cout << "Please enter your first name and age (in years):\n";
	string first_name;
	double age_years;
	cin >> first_name >> age_years;
	cout << "Hello, " << first_name << " (age: " << age_years*12 << " months old!)\n";
}
