#include "comb.h"
#include "mathext.h"
#include <stdexcept>
using std::out_of_range;

double comb(int m, int n) noexcept(false)
{
	if (m <= 0 || n <= 0)
	{
		throw out_of_range("n or m is zero.");
	}
	
	return (fact(n) / (fact(m) * fact(n - m)));
}