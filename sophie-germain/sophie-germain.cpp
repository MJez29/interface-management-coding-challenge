#include "sophie-germain.h"
#include "../prime/prime.h"

// is_sophie_germain_prime
//
// Determines whether a number is a sophie germain prime
// A sophie germain prime is a primer number n where 2n+1 is also prime
//
// @param { int } n - The number to evaluate its sophie germain primeness
//
// @returns { bool } - Whether or not n is a sophie germain prime
//
bool is_sophie_germain_prime(int n)
{
	return is_prime(n) && is_prime(2 * n + 1);
}
