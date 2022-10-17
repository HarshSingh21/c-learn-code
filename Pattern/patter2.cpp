// C++ code to demonstrate star pattern
#include <iostream>
using namespace std;

// Function to demonstrate printing pattern
void pypart2(int n)
{
	
	int k = 2 * n - 2;
	for (int i = n; i > 0; i--) {
		for (int j = 0; j < n-i; j++)
			cout << " ";

		// Decrementing k after each loop
		k = k - 2;
		for (int j = 0; j < i; j++) {
			// Printing stars
			cout << "* ";
		}
		cout << endl;
	}
}

// Driver Code
int main()
{
	int n = 5;
	pypart2(n);
	return 0;
}
