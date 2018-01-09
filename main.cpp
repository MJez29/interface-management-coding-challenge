#include <iostream>
#include "sophie-germain/sophie-germain.h"

using namespace std;

int main()
{
	cout << "--- SHOPHIE GERMAIN PRIME VERIFIER ---" << endl;
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
