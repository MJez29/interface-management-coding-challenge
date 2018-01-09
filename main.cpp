#include <iostream>
#include "sophie-germain/sophie-germain.h"

using namespace std;

// Entry point of application
// Determines whether or not a number is a sophie germain prime using memoization and the sieve of eratosthenes

int main()
{
	cout << "--- SHOPHIE GERMAIN PRIME VERIFIER ---" << endl;
	
	// Reads in numbers until 0 is entered
	while (true)
	{
		cout << "Enter a number (0 to exit): ";
		int n;
		cin >> n;
		if (n == 0)
			break;
		
		cout << n << " is " << (is_sophie_germain_prime(n) ? "" : "not ") << "a sophie germain prime" << endl;
	}

	return 0;
}
