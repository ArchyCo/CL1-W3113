#include <iostream>

using namespace std;
//wmain is only there to allow the other code for circum to actually run.
int wmain(int argc, const char * argv[]) {

	int i, j, result;

	cout << "Enter the first number:\n";
	cin >> i;

	cout << "Enter the second number:\n";
	cin >> j;

	result = i / j;

	cout << result;
	return 0;
}