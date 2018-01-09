#include "sophie-germain.h"
#include "../prime/prime.h"

bool is_sophie_germain_prime(int n)
{
	return is_prime(n) && is_prime(2 * n + 1);
}
