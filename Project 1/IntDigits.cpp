/* Determine and print digits of five-digit integer.
 * Alex Debrecht */

#include <iostream>
using namespace std;

// function main begins program execution
int main() {

	cout << "Enter a five-digit integer." << endl; // Ask user for five digit integer

	int number; // Declare variable

	cin >> number; // Accept integer from user

	// Division determines digit, remainder removes digit
	int digit1 = number / 10000; // calculate 10000th place
	int remainder = number % 10000; // remove 10000th place
	int digit2 = remainder / 1000;
	remainder = remainder % 1000;
	int digit3 = remainder / 100;
	remainder = remainder % 100;
	int digit4 = remainder / 10;
	remainder = remainder % 10;
	int digit5 = remainder;

	// Print digits sequentially with 3 spaces between each
	cout << digit1 << "   " << digit2 << "   " << digit3 << "   " << digit4 <<
			"   " << digit5 << endl;

} // end main
