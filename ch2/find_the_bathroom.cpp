// This program prints a series of instructions that detail how to reach an upstairs bathroom to the terminal

/*
 * Ground Floor  First Floor
 * +----------+  +----------+
 * |......[[[.|  |..+.....[.|
 * |@.........|  |t.|.......|
 * +----------+  +----------+
 */

#include "std_lib_facilities.h"

int main()
{
	cout << "Move north one time.\n";
	cout << "Move east 9 times.\n";
	cout << ">> First Floor reached!\n";
	cout << "Move south one time.\n";
	cout << "Move east six times.\n";
	cout << "Move north one time.\n";
	cout << "Move east three times.\n";
	cout << ">> Bathroom reached!\n";
	cout << "Move south one time.\n";
	cout << ">> Toilet reached!\n";
	keep_window_open();
	return 0;
}
