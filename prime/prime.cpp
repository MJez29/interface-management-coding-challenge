#include "prime.h"
#include <vector>
#include <iostream>

using namespace std;

// The vector of numbers whose primeness has already been computed
// If an entry at index i is true, then i + 2 is a prime number
vector<bool> is_prime_lookup{ true, true };

// is_prime
// Determines whether or not a number is prime
//
// @param { int } n - The number to check
//
// @returns { bool } - Whether or not the number is prime
//
bool is_prime(int n)
{
	// Integers from (-inf, 1] are not prime
	if (n < 2)
		return false;
	
	// If the requested number's primeness has already been determined
	if (n - 1 <= is_prime_lookup.size())
		return is_prime_lookup[n - 2];
		
	is_prime_lookup.resize(n - 1, true);
	
	for (int i = 0; i <= n / 2; i++)
	{
		if (is_prime_lookup[i])
		{
			for (int j = 2 * i + 2; j < n - 1; j += i + 2) {
				is_prime_lookup[j] = false;
			}
		}
				
	}
	return is_prime_lookup[n - 2];
}

